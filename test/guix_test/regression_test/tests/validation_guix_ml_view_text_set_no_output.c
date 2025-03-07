/* This is a small demo of the high-performance GUIX graphics framework. */

#include <stdio.h>
#include "tx_api.h"
#include "gx_api.h"
#include "gx_validation_utility.h"
#include "gx_system.h"

TEST_PARAM test_parameter = {
    "guix_ml_text_view_text_set_no_output", /* Test name */
    0, 0, 0, 0  /* Define the coordinates of the capture area.*/
};

int main(int argc, char ** argv)
{
    /* Start ThreadX system */
    tx_kernel_enter(); 
    return(0);
}

static VOID      control_thread_entry(ULONG);

VOID tx_application_define(void *first_unused_memory)
{
    gx_validation_application_define(first_unused_memory);
    
    /* Termiante the test if it runs for more than 100 ticks */
    /* This function is not implemented yet. */
    gx_validation_watchdog_create(100);

    /* Create a dedicated thread to perform various operations
       on the line drawing example. These operations simulate 
       user input. */
    gx_validation_control_thread_create(control_thread_entry);
}


#ifdef WIN32
#undef WIN32
#endif

#include "gx_validation_wrapper.h"
#include "demo_guix_all_widgets.c"

static VOID control_thread_entry(ULONG input)
{
int       failed_tests = 0;
UINT      status;
GX_STRING string;
GX_MULTI_LINE_TEXT_VIEW *view = &text_screen.text_screen_text_view_1;

#ifdef GX_ENABLE_DEPRECATED_STRING_API
GX_CHAR invalid_string[GX_MAX_STRING_LENGTH + 1];

    memset(invalid_string, 'x', GX_MAX_STRING_LENGTH + 1);
    status = gx_multi_line_text_view_text_set(view, invalid_string);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);
#endif
    status = gx_multi_line_text_view_text_set_ext(GX_NULL, GX_NULL);
    EXPECT_EQ(GX_PTR_ERROR, status);

    status = gx_multi_line_text_view_text_set_ext(view, GX_NULL);
    EXPECT_EQ(GX_SUCCESS, status);

    string.gx_string_ptr = GX_NULL;
    string.gx_string_length = 2;
    status = gx_multi_line_text_view_text_set_ext(view, &string);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);

    string.gx_string_ptr = "test";
    string.gx_string_length = 5;
    status = gx_multi_line_text_view_text_set_ext(view, &string);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);

    string.gx_string_ptr = "test";
    string.gx_string_length = 3;
    status = gx_multi_line_text_view_text_set_ext(view, &string);
    EXPECT_EQ(GX_INVALID_STRING_LENGTH, status);

    if(failed_tests == 0) 
    {
        gx_validation_print_test_result(TEST_SUCCESS);
        exit(0);
    }
    else 
    {
        gx_validation_print_test_result(TEST_FAIL);
        exit(1);
    }
}
