/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "gx_api.h"
#include "all_widgets_332rgb_resources.h"
#include "all_widgets_332rgb_specifications.h"

GX_UBYTE          alpha_value = 255;
GX_BOOL           sprite_move_down = GX_TRUE;
extern GX_WINDOW *pSpriteScreen;
extern VOID        memory_free(VOID *mem);
GX_RESOURCE_ID     map_id = GX_PIXELMAP_ID_ROTATE_APPLE;

void move_sprite(void);



UINT sprite_event_handler(GX_WINDOW *window, GX_EVENT *event_ptr)
{
    switch (event_ptr->gx_event_type)
    {
    case GX_SIGNAL(ID_ALPHA_SLIDER, GX_EVENT_SLIDER_VALUE):
        alpha_value = (GX_UBYTE)event_ptr->gx_event_payload.gx_event_longdata;
        gx_system_dirty_mark(&((SPRITE_SCREEN_CONTROL_BLOCK *)pSpriteScreen)->sprite_screen_apple_window);
        break;

    case GX_SIGNAL(ID_BIRD_SPRITE, GX_EVENT_SPRITE_COMPLETE):
        gx_widget_hide(&((SPRITE_SCREEN_CONTROL_BLOCK *)pSpriteScreen)->sprite_screen_sprite);
        move_sprite();
        gx_widget_show(&((SPRITE_SCREEN_CONTROL_BLOCK *)pSpriteScreen)->sprite_screen_sprite);
        break;
    default:
        return next_button_handler(window, event_ptr);
    }

    return 0;
}

void move_sprite(void)
{
    GX_RECTANGLE size;
    GX_SPRITE *sprite = &((SPRITE_SCREEN_CONTROL_BLOCK *)pSpriteScreen)->sprite_screen_sprite;

    size = sprite->gx_widget_size;

    if (sprite_move_down)
    {
        gx_utility_rectangle_shift(&size, 100, 117);
        sprite_move_down = GX_FALSE;
    }
    else
    {
        gx_utility_rectangle_shift(&size, 100, -57);
        sprite_move_down = GX_TRUE;
    }
    if (size.gx_rectangle_bottom > pSpriteScreen->gx_widget_size.gx_rectangle_bottom)
    {
        size.gx_rectangle_top -= pSpriteScreen->gx_widget_size.gx_rectangle_bottom;
        size.gx_rectangle_bottom -= pSpriteScreen->gx_widget_size.gx_rectangle_bottom;
    }
    if (size.gx_rectangle_top < pSpriteScreen->gx_widget_size.gx_rectangle_top)
    {
        size.gx_rectangle_top += pSpriteScreen->gx_widget_size.gx_rectangle_bottom;
        size.gx_rectangle_bottom += pSpriteScreen->gx_widget_size.gx_rectangle_bottom;
    }


    if (size.gx_rectangle_right > pSpriteScreen->gx_widget_size.gx_rectangle_right)
    {
        size.gx_rectangle_left -= pSpriteScreen->gx_widget_size.gx_rectangle_right;
        size.gx_rectangle_right -= pSpriteScreen->gx_widget_size.gx_rectangle_right;
    }
    gx_widget_resize(sprite, &size);
}

VOID apple_window_draw(GX_WINDOW *window)
{
    GX_PIXELMAP *map;
    GX_PIXELMAP scaled_map;
    int         width;
    int         height;
    int         xpos;
    int         ypos;

    gx_context_pixelmap_get(map_id, &map);

    width = (alpha_value * map->gx_pixelmap_width) >> 8;
    height = (alpha_value * map->gx_pixelmap_height) >> 8;

    if ((width == 0) || (height == 0))
    {
        return;
    }

    if (gx_utility_pixelmap_resize(map, &scaled_map, width, height) == GX_SUCCESS)
    {
        xpos = window->gx_widget_size.gx_rectangle_left;
        ypos = window->gx_widget_size.gx_rectangle_top;

        xpos += (map->gx_pixelmap_width - width) >> 1;
        ypos += (map->gx_pixelmap_height - height) >> 1;

        gx_canvas_pixelmap_blend(xpos, ypos, &scaled_map, alpha_value);

        if (scaled_map.gx_pixelmap_data)
        {
            memory_free((VOID *)scaled_map.gx_pixelmap_data);
        }

        if (scaled_map.gx_pixelmap_aux_data)
        {
            memory_free((VOID *)scaled_map.gx_pixelmap_aux_data);
        }
    }

}