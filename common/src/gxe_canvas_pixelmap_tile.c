/***************************************************************************
 * Copyright (c) 2024 Microsoft Corporation 
 * 
 * This program and the accompanying materials are made available under the
 * terms of the MIT License which is available at
 * https://opensource.org/licenses/MIT.
 * 
 * SPDX-License-Identifier: MIT
 **************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */
/** GUIX Component                                                        */
/**                                                                       */
/**   Canvas Management (Canvas)                                          */
/**                                                                       */
/**************************************************************************/

#define GX_SOURCE_CODE


/* Include necessary system files.  */

#include "gx_api.h"
#include "gx_canvas.h"
#include "gx_system.h"

/* Bring in externs for caller checking code.  */
GX_CALLER_CHECKING_EXTERNS

/**************************************************************************/
/*                                                                        */
/*  FUNCTION                                               RELEASE        */
/*                                                                        */
/*    _gxe_canvas_pixelmap_tile                           PORTABLE C      */
/*                                                           6.1          */
/*  AUTHOR                                                                */
/*                                                                        */
/*    Kenneth Maxwell, Microsoft Corporation                              */
/*                                                                        */
/*  DESCRIPTION                                                           */
/*                                                                        */
/*    This function checks errors in the canvas pixelmap tile function.   */
/*                                                                        */
/*  INPUT                                                                 */
/*                                                                        */
/*    fill                                  Area to fill with pixelmap    */
/*    pixelmap                              Pointer to actual pixelmap    */
/*                                            to draw                     */
/*                                                                        */
/*  OUTPUT                                                                */
/*                                                                        */
/*    status                                Completion status             */
/*                                                                        */
/*  CALLS                                                                 */
/*                                                                        */
/*   _gx_canvas_pixelmap_tile               The actual pixelmap tile      */
/*                                            routine                     */
/*                                                                        */
/*  CALLED BY                                                             */
/*                                                                        */
/*    Application Code                                                    */
/*                                                                        */
/*  RELEASE HISTORY                                                       */
/*                                                                        */
/*    DATE              NAME                      DESCRIPTION             */
/*                                                                        */
/*  05-19-2020     Kenneth Maxwell          Initial Version 6.0           */
/*  09-30-2020     Kenneth Maxwell          Modified comment(s),          */
/*                                            resulting in version 6.1    */
/*                                                                        */
/**************************************************************************/
UINT  _gxe_canvas_pixelmap_tile(GX_RECTANGLE *fill, GX_PIXELMAP *pixelmap)
{
UINT status;

    /* Check for appropriate caller.  */
    GX_INIT_AND_THREADS_CALLER_CHECKING

    /* Check error for valid pointer. */
    if ((fill == GX_NULL) || (pixelmap == GX_NULL))
    {
        return(GX_PTR_ERROR);
    }

    if (_gx_system_current_draw_context == GX_NULL)
    {
        return GX_INVALID_CONTEXT;
    }

    /* Check for invalid widget.  */
    if ((fill -> gx_rectangle_left > fill -> gx_rectangle_right) ||
        (fill -> gx_rectangle_top > fill -> gx_rectangle_bottom))
    {
        return(GX_INVALID_VALUE);
    }

    /* Call the actual function.  */
    status = _gx_canvas_pixelmap_tile(fill, pixelmap);

    /* Return completion status.  */
    return(status);
}

