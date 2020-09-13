const int VIDEO_OFFSET = 0xb8000;

const char VCLR_FG_BLACK       = 0x00;
const char VCLR_FG_BLUE        = 0x01;
const char VCLR_FG_GREEN       = 0x02;
const char VCLR_FG_CYAN        = 0x03;
const char VCLR_FG_RED         = 0x04;
const char VCLR_FG_MAGENTA     = 0x05;
const char VCLR_FG_BROWN       = 0x06;
const char VCLR_FG_LIGHTGREY   = 0x07;
const char VCLR_FG_DARKGREY    = 0x08;
const char VCLR_FG_LIGHTBLUE   = 0x09;
const char VCLR_FG_LIGHTGREEN  = 0x0A;
const char VCLR_FG_LIGHTCYAN   = 0x0B;
const char VCLR_FG_LIGTHRED    = 0x0C;
const char VCLR_FG_PINK        = 0x0D;
const char VCLR_FG_YELLOW      = 0x0E;
const char VCLR_FG_WHITE       = 0x0F;

const char VCLR_BG_BLACK       = 0x00;
const char VCLR_BG_BLUE        = 0x10;
const char VCLR_BG_GREEN       = 0x20;
const char VCLR_BG_CYAN        = 0x30;
const char VCLR_BG_RED         = 0x40;
const char VCLR_BG_MAGENTA     = 0x50;
const char VCLR_BG_BROWN       = 0x60;
const char VCLR_BG_LIGHTGREY   = 0x70;
const char VCLR_BG_DARKGREY    = 0x80;
const char VCLR_BG_LIGHTBLUE   = 0x90;
const char VCLR_BG_LIGHTGREEN  = 0xA0;
const char VCLR_BG_LIGHTCYAN   = 0xB0;
const char VCLR_BG_LIGTHRED    = 0xC0;
const char VCLR_BG_PINK        = 0xD0;
const char VCLR_BG_YELLOW      = 0xE0;
const char VCLR_BG_WHITE       = 0xF0;

char CURRENT_FG_COLOR = 0x00;
char CURRENT_BG_COLOR = 0x00;

void VideoSetFgColor(char clr)
{
    CURRENT_FG_COLOR = clr;
}

char VideoGetFgColor()
{
    return CURRENT_FG_COLOR;
}

void VideoSetBgColor(char clr)
{
    CURRENT_BG_COLOR = clr;
}

char VideoGetBgColor()
{
    return CURRENT_BG_COLOR;
}

char VideoGetTeletypeColor()
{
    return CURRENT_BG_COLOR + CURRENT_FG_COLOR;
}
