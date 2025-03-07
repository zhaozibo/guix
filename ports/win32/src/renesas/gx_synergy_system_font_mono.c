
#include "gx_api.h"

/* Synergy Font SYSTEM Data Definition  */  

static GX_CONST GX_UBYTE FONT_SYSTEM_char_21[13] =
{
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x00,
    0x00,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_22[5] =
{
    0x33,
    0x33,
    0x33,
    0x33,
    0x33
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_23[28] =
{
    0x20,0x02,
    0x20,0x02,
    0x30,0x03,
    0x30,0x01,
    0xfe,0x0f,
    0xfe,0x0f,
    0x90,0x01,
    0x98,0x00,
    0xff,0x07,
    0xff,0x07,
    0xc8,0x00,
    0xcc,0x00,
    0x4c,0x00,
    0x44,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_24[34] =
{
    0x10,0x00,
    0x10,0x00,
    0x7c,0x00,
    0xfe,0x00,
    0x97,0x00,
    0x13,0x00,
    0x1f,0x00,
    0x7e,0x00,
    0xf8,0x00,
    0x90,0x01,
    0x90,0x01,
    0xd1,0x01,
    0xff,0x00,
    0x7e,0x00,
    0x10,0x00,
    0x10,0x00,
    0x10,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_25[26] =
{
    0x1e,0x08,
    0x33,0x04,
    0x33,0x06,
    0x33,0x02,
    0x33,0x01,
    0x33,0x01,
    0x9e,0x3c,
    0x40,0x66,
    0x40,0x66,
    0x20,0x66,
    0x30,0x66,
    0x10,0x66,
    0x08,0x3c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_26[26] =
{
    0xf0,0x00,
    0xf8,0x01,
    0x0c,0x01,
    0x0c,0x00,
    0x1c,0x00,
    0x3c,0x00,
    0x76,0x06,
    0xe3,0x06,
    0xc3,0x03,
    0x83,0x01,
    0x87,0x03,
    0xfe,0x07,
    0x7c,0x0e
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_27[5] =
{
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_28[16] =
{
    0x0c,
    0x04,
    0x06,
    0x06,
    0x02,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x02,
    0x06,
    0x06,
    0x04,
    0x0c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_29[16] =
{
    0x03,
    0x02,
    0x06,
    0x06,
    0x04,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x04,
    0x06,
    0x06,
    0x02,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_2a[8] =
{
    0x08,
    0x49,
    0x2a,
    0x1c,
    0x1c,
    0x2a,
    0x49,
    0x08
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_2b[24] =
{
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0xff,0x0f,
    0xff,0x0f,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_2c[4] =
{
    0x06,
    0x06,
    0x02,
    0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_2d[2] =
{
    0x1f,
    0x1f
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_2e[2] =
{
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_2f[15] =
{
    0x30,
    0x30,
    0x18,
    0x18,
    0x18,
    0x1c,
    0x0c,
    0x0c,
    0x0c,
    0x0e,
    0x06,
    0x06,
    0x06,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_30[26] =
{
    0x7c,0x00,
    0xfe,0x00,
    0xc6,0x00,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc6,0x00,
    0xfe,0x00,
    0x7c,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_31[13] =
{
    0x1c,
    0x1f,
    0x1b,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0xff,
    0xff
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_32[13] =
{
    0x3e,
    0x7f,
    0xe1,
    0xc0,
    0xc0,
    0xe0,
    0x60,
    0x30,
    0x18,
    0x0c,
    0x06,
    0xff,
    0xff
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_33[26] =
{
    0x7e,0x00,
    0xff,0x00,
    0xc1,0x01,
    0x80,0x01,
    0xc0,0x01,
    0xfc,0x00,
    0xfc,0x00,
    0xc0,0x01,
    0x80,0x01,
    0x80,0x01,
    0xc1,0x01,
    0xff,0x00,
    0x7e,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_34[26] =
{
    0xe0,0x00,
    0xe0,0x00,
    0xd0,0x00,
    0xd8,0x00,
    0xc8,0x00,
    0xc4,0x00,
    0xc6,0x00,
    0xc2,0x00,
    0xff,0x03,
    0xff,0x03,
    0xc0,0x00,
    0xc0,0x00,
    0xc0,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_35[13] =
{
    0x7e,
    0x7e,
    0x06,
    0x06,
    0x3e,
    0x7e,
    0xe2,
    0xc0,
    0xc0,
    0xc0,
    0xe1,
    0x7f,
    0x3e
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_36[26] =
{
    0x78,0x00,
    0xfc,0x00,
    0x8e,0x00,
    0x07,0x00,
    0x03,0x00,
    0x7b,0x00,
    0xff,0x00,
    0xc7,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc6,0x01,
    0xfe,0x00,
    0x7c,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_37[13] =
{
    0xff,
    0xff,
    0x60,
    0x60,
    0x60,
    0x70,
    0x30,
    0x30,
    0x38,
    0x18,
    0x18,
    0x1c,
    0x0c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_38[26] =
{
    0x7c,0x00,
    0xfe,0x00,
    0xc7,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xfe,0x00,
    0xfe,0x00,
    0xc7,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xfe,0x00,
    0x7c,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_39[26] =
{
    0x7c,0x00,
    0xfe,0x00,
    0xc7,0x00,
    0x83,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xfe,0x01,
    0xbc,0x01,
    0x80,0x01,
    0xc0,0x01,
    0xe2,0x00,
    0x7e,0x00,
    0x3c,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_3a[9] =
{
    0x03,
    0x03,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_3b[11] =
{
    0x06,
    0x06,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x06,
    0x06,
    0x02,
    0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_3c[20] =
{
    0x00,0x04,
    0x80,0x07,
    0xe0,0x03,
    0x7c,0x00,
    0x1f,0x00,
    0x1f,0x00,
    0x7c,0x00,
    0xe0,0x03,
    0x80,0x07,
    0x00,0x04
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_3d[12] =
{
    0xff,0x07,
    0xff,0x07,
    0x00,0x00,
    0x00,0x00,
    0xff,0x07,
    0xff,0x07
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_3e[20] =
{
    0x01,0x00,
    0x0f,0x00,
    0x3e,0x00,
    0xf0,0x01,
    0xc0,0x07,
    0xc0,0x07,
    0xf0,0x01,
    0x3e,0x00,
    0x0f,0x00,
    0x01,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_3f[13] =
{
    0x1e,
    0x7f,
    0x61,
    0x60,
    0x60,
    0x30,
    0x18,
    0x0c,
    0x0c,
    0x0c,
    0x00,
    0x0c,
    0x0c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_40[32] =
{
    0xe0,0x07,
    0xf8,0x1f,
    0x3c,0x38,
    0x0e,0x60,
    0x06,0xc0,
    0xc7,0xc6,
    0xe3,0xc7,
    0x63,0xc6,
    0x63,0x66,
    0xe3,0x3f,
    0xc7,0x0e,
    0x06,0x00,
    0x0e,0x00,
    0x1c,0x08,
    0xf8,0x0f,
    0xe0,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_41[26] =
{
    0x60,0x00,
    0x60,0x00,
    0xf0,0x00,
    0xf0,0x00,
    0x98,0x01,
    0x98,0x01,
    0x98,0x01,
    0x0c,0x03,
    0xfc,0x03,
    0xfe,0x07,
    0x06,0x06,
    0x06,0x06,
    0x03,0x0c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_42[26] =
{
    0x7f,0x00,
    0xff,0x00,
    0xc3,0x00,
    0xc3,0x00,
    0xc3,0x00,
    0x7f,0x00,
    0x7f,0x00,
    0xc3,0x00,
    0x83,0x01,
    0x83,0x01,
    0xc3,0x01,
    0xff,0x00,
    0x7f,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_43[26] =
{
    0xf0,0x03,
    0xfc,0x07,
    0x0e,0x04,
    0x06,0x00,
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0x06,0x00,
    0x0e,0x04,
    0xfc,0x07,
    0xf0,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_44[26] =
{
    0x7f,0x00,
    0xff,0x01,
    0x83,0x03,
    0x03,0x07,
    0x03,0x06,
    0x03,0x06,
    0x03,0x06,
    0x03,0x06,
    0x03,0x06,
    0x03,0x07,
    0x83,0x03,
    0xff,0x01,
    0x7f,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_45[13] =
{
    0xff,
    0xff,
    0x03,
    0x03,
    0x03,
    0xff,
    0xff,
    0x03,
    0x03,
    0x03,
    0x03,
    0xff,
    0xff
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_46[13] =
{
    0xff,
    0xff,
    0x03,
    0x03,
    0x03,
    0x7f,
    0x7f,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_47[26] =
{
    0xf0,0x03,
    0xfc,0x07,
    0x0e,0x04,
    0x06,0x00,
    0x03,0x00,
    0xc3,0x07,
    0xc3,0x07,
    0x03,0x06,
    0x03,0x06,
    0x06,0x06,
    0x0e,0x06,
    0xfc,0x03,
    0xf8,0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_48[26] =
{
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0xff,0x03,
    0xff,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_49[13] =
{
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_4a[17] =
{
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x1c,
    0x0f,
    0x07
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_4b[26] =
{
    0x83,0x01,
    0xc3,0x00,
    0x63,0x00,
    0x33,0x00,
    0x1b,0x00,
    0x0f,0x00,
    0x0f,0x00,
    0x1b,0x00,
    0x33,0x00,
    0x63,0x00,
    0xc3,0x00,
    0x83,0x01,
    0x03,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_4c[13] =
{
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0xff,
    0xff
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_4d[26] =
{
    0x07,0x0e,
    0x0f,0x0f,
    0x0f,0x0f,
    0x1b,0x0d,
    0x9b,0x0d,
    0x9b,0x0d,
    0xf3,0x0c,
    0xf3,0x0c,
    0x63,0x0c,
    0x63,0x0c,
    0x03,0x0c,
    0x03,0x0c,
    0x03,0x0c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_4e[26] =
{
    0x07,0x03,
    0x07,0x03,
    0x0f,0x03,
    0x0f,0x03,
    0x1b,0x03,
    0x1b,0x03,
    0x33,0x03,
    0x63,0x03,
    0x63,0x03,
    0xc3,0x03,
    0xc3,0x03,
    0x83,0x03,
    0x83,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_4f[26] =
{
    0xf8,0x01,
    0xfc,0x03,
    0x0e,0x07,
    0x06,0x06,
    0x03,0x0c,
    0x03,0x0c,
    0x03,0x0c,
    0x03,0x0c,
    0x03,0x0c,
    0x06,0x06,
    0x0e,0x07,
    0xfc,0x03,
    0xf8,0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_50[13] =
{
    0x3f,
    0x7f,
    0xe3,
    0xc3,
    0xc3,
    0xe3,
    0x7f,
    0x3f,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_51[30] =
{
    0xf8,0x01,
    0xfc,0x03,
    0x0e,0x07,
    0x06,0x06,
    0x03,0x0c,
    0x03,0x0c,
    0x03,0x0c,
    0x03,0x0c,
    0x03,0x0c,
    0x06,0x06,
    0x0e,0x07,
    0xfc,0x03,
    0xf8,0x01,
    0x80,0x01,
    0x00,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_52[26] =
{
    0x3f,0x00,
    0x7f,0x00,
    0xe3,0x00,
    0xc3,0x00,
    0xc3,0x00,
    0xe3,0x00,
    0x7f,0x00,
    0x3f,0x00,
    0x63,0x00,
    0xc3,0x00,
    0xc3,0x00,
    0x83,0x01,
    0x83,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_53[26] =
{
    0x7c,0x00,
    0xfe,0x00,
    0x87,0x00,
    0x03,0x00,
    0x03,0x00,
    0x3e,0x00,
    0xfc,0x00,
    0xc0,0x01,
    0x80,0x01,
    0x80,0x01,
    0xc1,0x01,
    0xff,0x00,
    0x7e,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_54[26] =
{
    0xff,0x0f,
    0xff,0x0f,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_55[26] =
{
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x86,0x01,
    0xfe,0x01,
    0xfc,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_56[26] =
{
    0x03,0x0c,
    0x06,0x06,
    0x06,0x06,
    0x06,0x06,
    0x0c,0x03,
    0x0c,0x03,
    0x98,0x01,
    0x98,0x01,
    0x98,0x01,
    0xf0,0x00,
    0xf0,0x00,
    0x60,0x00,
    0x60,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_57[39] =
{
    0x83,0x83,0x01,
    0x83,0x83,0x01,
    0xc6,0xc6,0x00,
    0xc6,0xc6,0x00,
    0xc6,0xc6,0x00,
    0xc6,0xc6,0x00,
    0x6c,0x6c,0x00,
    0x6c,0x6c,0x00,
    0x6c,0x6c,0x00,
    0x6c,0x6c,0x00,
    0x38,0x38,0x00,
    0x38,0x38,0x00,
    0x38,0x38,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_58[26] =
{
    0x07,0x07,
    0x06,0x03,
    0x8c,0x01,
    0x8c,0x01,
    0xd8,0x00,
    0x70,0x00,
    0x70,0x00,
    0x70,0x00,
    0xd8,0x00,
    0x8c,0x01,
    0x8c,0x01,
    0x06,0x03,
    0x07,0x07
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_59[26] =
{
    0x07,0x0e,
    0x06,0x06,
    0x0c,0x03,
    0x98,0x01,
    0x98,0x01,
    0xf0,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00,
    0x60,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_5a[26] =
{
    0xff,0x07,
    0xff,0x07,
    0x80,0x03,
    0xc0,0x01,
    0xc0,0x00,
    0xe0,0x00,
    0x70,0x00,
    0x38,0x00,
    0x18,0x00,
    0x0c,0x00,
    0x0e,0x00,
    0xff,0x07,
    0xff,0x07
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_5b[16] =
{
    0x0f,
    0x0f,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x0f,
    0x0f
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_5c[15] =
{
    0x03,
    0x03,
    0x06,
    0x06,
    0x06,
    0x0e,
    0x0c,
    0x0c,
    0x0c,
    0x1c,
    0x18,
    0x18,
    0x18,
    0x30,
    0x30
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_5d[16] =
{
    0x0f,
    0x0f,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0f,
    0x0f
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_5e[10] =
{
    0x70,0x00,
    0xd8,0x00,
    0x8c,0x01,
    0x06,0x03,
    0x03,0x06
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_5f[4] =
{
    0xff,0x01,
    0xff,0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_60[3] =
{
    0x03,
    0x06,
    0x0c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_61[10] =
{
    0x3c,
    0x7e,
    0xe2,
    0xc0,
    0xfc,
    0xff,
    0xc3,
    0xe3,
    0xff,
    0xde
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_62[28] =
{
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0x7b,0x00,
    0xff,0x00,
    0xc7,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xff,0x00,
    0x7b,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_63[10] =
{
    0x78,
    0xfe,
    0x86,
    0x03,
    0x03,
    0x03,
    0x03,
    0x86,
    0xfe,
    0x78
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_64[28] =
{
    0x80,0x01,
    0x80,0x01,
    0x80,0x01,
    0x80,0x01,
    0xbc,0x01,
    0xfe,0x01,
    0xc7,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xfe,0x01,
    0xbc,0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_65[20] =
{
    0xf8,0x00,
    0xfe,0x01,
    0x86,0x03,
    0x03,0x03,
    0xff,0x03,
    0xff,0x03,
    0x03,0x00,
    0x06,0x02,
    0xfe,0x03,
    0xf8,0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_66[14] =
{
    0x78,
    0x7c,
    0x0c,
    0x0c,
    0x7f,
    0x7f,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_67[28] =
{
    0xbc,0x01,
    0xfe,0x01,
    0xc7,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xfe,0x01,
    0xbc,0x01,
    0x80,0x01,
    0xc2,0x00,
    0xfe,0x00,
    0x7c,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_68[14] =
{
    0x03,
    0x03,
    0x03,
    0x03,
    0x7b,
    0x7f,
    0xe7,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_69[14] =
{
    0x03,
    0x03,
    0x00,
    0x00,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_6a[18] =
{
    0x0c,
    0x0c,
    0x00,
    0x00,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0c,
    0x0f,
    0x07
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_6b[28] =
{
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0xc3,0x00,
    0x63,0x00,
    0x33,0x00,
    0x1b,0x00,
    0x0f,0x00,
    0x0f,0x00,
    0x1b,0x00,
    0x33,0x00,
    0x63,0x00,
    0xc3,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_6c[14] =
{
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_6d[20] =
{
    0x7b,0x1e,
    0x7f,0x1f,
    0xc7,0x31,
    0xc3,0x30,
    0xc3,0x30,
    0xc3,0x30,
    0xc3,0x30,
    0xc3,0x30,
    0xc3,0x30,
    0xc3,0x30
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_6e[10] =
{
    0x7b,
    0x7f,
    0xe7,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_6f[20] =
{
    0x78,0x00,
    0xfe,0x01,
    0x86,0x01,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x03,0x03,
    0x86,0x01,
    0xfe,0x01,
    0x78,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_70[28] =
{
    0x7b,0x00,
    0xff,0x00,
    0xc7,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xff,0x00,
    0x7b,0x00,
    0x03,0x00,
    0x03,0x00,
    0x03,0x00,
    0x03,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_71[28] =
{
    0xbc,0x01,
    0xfe,0x01,
    0xc7,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0x83,0x01,
    0xc7,0x01,
    0xfe,0x01,
    0xbc,0x01,
    0x80,0x01,
    0x80,0x01,
    0x80,0x01,
    0x80,0x01
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_72[10] =
{
    0x3b,
    0x3f,
    0x07,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_73[10] =
{
    0x3e,
    0x7f,
    0x43,
    0x07,
    0x3e,
    0x78,
    0x60,
    0x61,
    0x7f,
    0x3e
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_74[13] =
{
    0x06,
    0x06,
    0x06,
    0x3f,
    0x3f,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x3e,
    0x3c
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_75[10] =
{
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xc3,
    0xe7,
    0xfe,
    0xde
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_76[20] =
{
    0x03,0x03,
    0x03,0x03,
    0x86,0x01,
    0x86,0x01,
    0xcc,0x00,
    0xcc,0x00,
    0xcc,0x00,
    0x78,0x00,
    0x78,0x00,
    0x30,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_77[20] =
{
    0xe3,0x18,
    0xe3,0x18,
    0xa3,0x18,
    0xb6,0x0d,
    0xb6,0x0d,
    0xb6,0x0d,
    0x16,0x0d,
    0x1c,0x07,
    0x1c,0x07,
    0x1c,0x07
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_78[20] =
{
    0x87,0x03,
    0x86,0x01,
    0xcc,0x00,
    0xcc,0x00,
    0x78,0x00,
    0x78,0x00,
    0xcc,0x00,
    0xcc,0x00,
    0x86,0x01,
    0x87,0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_79[28] =
{
    0x03,0x03,
    0x03,0x03,
    0x86,0x01,
    0x86,0x01,
    0xcc,0x00,
    0xcc,0x00,
    0x78,0x00,
    0x78,0x00,
    0x30,0x00,
    0x30,0x00,
    0x30,0x00,
    0x18,0x00,
    0x1e,0x00,
    0x0e,0x00
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_7a[10] =
{
    0xff,
    0xff,
    0x60,
    0x30,
    0x38,
    0x1c,
    0x0c,
    0x0e,
    0xff,
    0xff
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_7b[17] =
{
    0xf0,
    0xf8,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x0f,
    0x0f,
    0x1c,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0xf8,
    0xf0
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_7c[18] =
{
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03,
    0x03
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_7d[17] =
{
    0x0f,
    0x1f,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0xf0,
    0xf0,
    0x38,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x1f,
    0x0f
};

static GX_CONST GX_UBYTE FONT_SYSTEM_char_7e[6] =
{
    0x3e,0x04,
    0xff,0x07,
    0xe1,0x03
};

static GX_CONST GX_GLYPH SYNERGY_SYSTEM_FONT_GLYPHS_MONO[95] =
{
    { GX_NULL, 0, 0, 6, 0, 0, 0},
    { FONT_SYSTEM_char_21, 13, 0, 7, 3, 2, 13 },
    { FONT_SYSTEM_char_22, 13, -8, 8, 1, 6, 5 },
    { FONT_SYSTEM_char_23, 14, 0, 15, 1, 12, 14 },
    { FONT_SYSTEM_char_24, 14, 3, 11, 1, 9, 17 },
    { FONT_SYSTEM_char_25, 13, 0, 17, 1, 15, 13 },
    { FONT_SYSTEM_char_26, 13, 0, 13, 1, 12, 13 },
    { FONT_SYSTEM_char_27, 13, -8, 4, 1, 2, 5 },
    { FONT_SYSTEM_char_28, 14, 2, 7, 2, 4, 16 },
    { FONT_SYSTEM_char_29, 14, 2, 7, 1, 4, 16 },
    { FONT_SYSTEM_char_2a, 13, -5, 9, 1, 7, 8 },
    { FONT_SYSTEM_char_2b, 12, 0, 15, 2, 12, 12 },
    { FONT_SYSTEM_char_2c, 2, 2, 6, 1, 3, 4 },
    { FONT_SYSTEM_char_2d, 6, -4, 7, 1, 5, 2 },
    { FONT_SYSTEM_char_2e, 2, 0, 6, 2, 2, 2 },
    { FONT_SYSTEM_char_2f, 13, 2, 6, 0, 6, 15 },
    { FONT_SYSTEM_char_30, 13, 0, 11, 1, 9, 13 },
    { FONT_SYSTEM_char_31, 13, 0, 11, 2, 8, 13 },
    { FONT_SYSTEM_char_32, 13, 0, 11, 1, 8, 13 },
    { FONT_SYSTEM_char_33, 13, 0, 11, 1, 9, 13 },
    { FONT_SYSTEM_char_34, 13, 0, 11, 1, 10, 13 },
    { FONT_SYSTEM_char_35, 13, 0, 11, 1, 8, 13 },
    { FONT_SYSTEM_char_36, 13, 0, 11, 1, 9, 13 },
    { FONT_SYSTEM_char_37, 13, 0, 11, 1, 8, 13 },
    { FONT_SYSTEM_char_38, 13, 0, 11, 1, 9, 13 },
    { FONT_SYSTEM_char_39, 13, 0, 11, 1, 9, 13 },
    { FONT_SYSTEM_char_3a, 9, 0, 6, 2, 2, 9 },
    { FONT_SYSTEM_char_3b, 9, 2, 6, 1, 3, 11 },
    { FONT_SYSTEM_char_3c, 10, 0, 15, 2, 11, 10 },
    { FONT_SYSTEM_char_3d, 9, -3, 15, 2, 11, 6 },
    { FONT_SYSTEM_char_3e, 10, 0, 15, 2, 11, 10 },
    { FONT_SYSTEM_char_3f, 13, 0, 10, 1, 7, 13 },
    { FONT_SYSTEM_char_40, 13, 3, 18, 1, 16, 16 },
    { FONT_SYSTEM_char_41, 13, 0, 12, 0, 12, 13 },
    { FONT_SYSTEM_char_42, 13, 0, 12, 2, 9, 13 },
    { FONT_SYSTEM_char_43, 13, 0, 13, 1, 11, 13 },
    { FONT_SYSTEM_char_44, 13, 0, 14, 2, 11, 13 },
    { FONT_SYSTEM_char_45, 13, 0, 11, 2, 8, 13 },
    { FONT_SYSTEM_char_46, 13, 0, 10, 2, 8, 13 },
    { FONT_SYSTEM_char_47, 13, 0, 14, 1, 11, 13 },
    { FONT_SYSTEM_char_48, 13, 0, 14, 2, 10, 13 },
    { FONT_SYSTEM_char_49, 13, 0, 6, 2, 2, 13 },
    { FONT_SYSTEM_char_4a, 13, 4, 6, -1, 5, 17 },
    { FONT_SYSTEM_char_4b, 13, 0, 12, 2, 11, 13 },
    { FONT_SYSTEM_char_4c, 13, 0, 10, 2, 8, 13 },
    { FONT_SYSTEM_char_4d, 13, 0, 16, 2, 12, 13 },
    { FONT_SYSTEM_char_4e, 13, 0, 14, 2, 10, 13 },
    { FONT_SYSTEM_char_4f, 13, 0, 14, 1, 12, 13 },
    { FONT_SYSTEM_char_50, 13, 0, 11, 2, 8, 13 },
    { FONT_SYSTEM_char_51, 13, 2, 14, 1, 12, 15 },
    { FONT_SYSTEM_char_52, 13, 0, 13, 2, 10, 13 },
    { FONT_SYSTEM_char_53, 13, 0, 11, 1, 9, 13 },
    { FONT_SYSTEM_char_54, 13, 0, 12, 0, 12, 13 },
    { FONT_SYSTEM_char_55, 13, 0, 14, 2, 10, 13 },
    { FONT_SYSTEM_char_56, 13, 0, 12, 0, 12, 13 },
    { FONT_SYSTEM_char_57, 13, 0, 19, 1, 17, 13 },
    { FONT_SYSTEM_char_58, 13, 0, 13, 1, 11, 13 },
    { FONT_SYSTEM_char_59, 13, 0, 12, 0, 12, 13 },
    { FONT_SYSTEM_char_5a, 13, 0, 13, 1, 11, 13 },
    { FONT_SYSTEM_char_5b, 14, 2, 7, 1, 4, 16 },
    { FONT_SYSTEM_char_5c, 13, 2, 6, 0, 6, 15 },
    { FONT_SYSTEM_char_5d, 14, 2, 7, 2, 4, 16 },
    { FONT_SYSTEM_char_5e, 13, -8, 15, 2, 11, 5 },
    { FONT_SYSTEM_char_5f, -2, 4, 9, 0, 9, 2 },
    { FONT_SYSTEM_char_60, 14, -11, 9, 2, 4, 3 },
    { FONT_SYSTEM_char_61, 10, 0, 10, 1, 8, 10 },
    { FONT_SYSTEM_char_62, 14, 0, 11, 2, 9, 14 },
    { FONT_SYSTEM_char_63, 10, 0, 9, 1, 8, 10 },
    { FONT_SYSTEM_char_64, 14, 0, 11, 1, 9, 14 },
    { FONT_SYSTEM_char_65, 10, 0, 11, 1, 10, 10 },
    { FONT_SYSTEM_char_66, 14, 0, 6, 0, 7, 14 },
    { FONT_SYSTEM_char_67, 10, 4, 11, 1, 9, 14 },
    { FONT_SYSTEM_char_68, 14, 0, 11, 2, 8, 14 },
    { FONT_SYSTEM_char_69, 14, 0, 5, 2, 2, 14 },
    { FONT_SYSTEM_char_6a, 14, 4, 5, 0, 4, 18 },
    { FONT_SYSTEM_char_6b, 14, 0, 10, 2, 9, 14 },
    { FONT_SYSTEM_char_6c, 14, 0, 5, 2, 2, 14 },
    { FONT_SYSTEM_char_6d, 10, 0, 17, 2, 14, 10 },
    { FONT_SYSTEM_char_6e, 10, 0, 11, 2, 8, 10 },
    { FONT_SYSTEM_char_6f, 10, 0, 11, 1, 10, 10 },
    { FONT_SYSTEM_char_70, 10, 4, 11, 2, 9, 14 },
    { FONT_SYSTEM_char_71, 10, 4, 11, 1, 9, 14 },
    { FONT_SYSTEM_char_72, 10, 0, 8, 2, 6, 10 },
    { FONT_SYSTEM_char_73, 10, 0, 8, 1, 7, 10 },
    { FONT_SYSTEM_char_74, 13, 0, 7, 1, 6, 13 },
    { FONT_SYSTEM_char_75, 10, 0, 11, 2, 8, 10 },
    { FONT_SYSTEM_char_76, 10, 0, 11, 0, 10, 10 },
    { FONT_SYSTEM_char_77, 10, 0, 16, 1, 13, 10 },
    { FONT_SYSTEM_char_78, 10, 0, 11, 1, 10, 10 },
    { FONT_SYSTEM_char_79, 10, 4, 11, 0, 10, 14 },
    { FONT_SYSTEM_char_7a, 10, 0, 9, 1, 8, 10 },
    { FONT_SYSTEM_char_7b, 14, 3, 11, 2, 8, 17 },
    { FONT_SYSTEM_char_7c, 14, 4, 6, 2, 2, 18 },
    { FONT_SYSTEM_char_7d, 14, 3, 11, 2, 8, 17 },
    { FONT_SYSTEM_char_7e, 9, -4, 15, 2, 11, 3 }
};

GX_CONST GX_FONT _gx_synergy_system_font_mono = 
{
    GX_FONT_FORMAT_1BPP,                     /* format                         */
    0,                                       /* line pre-space                 */
    0,                                       /* line post-space                */ 
    18,                                      /* font data height               */
    14,                                      /* font baseline offset           */
    0x0020,                                  /* first glyph within data page   */
    0x007e,                                  /* last glyph within data page    */
    {SYNERGY_SYSTEM_FONT_GLYPHS_MONO},       /* pointer to glyph data          */
    GX_NULL                                  /* next font page                 */
};
