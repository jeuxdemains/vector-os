#include "video.c"
#include "screen.c"
#include "string.c"

void main ()
{
	//ScreenClear();
	VideoSetFgColor(VCLR_FG_DARKGREY);
	ScreenFill();
	VideoSetFgColor(VCLR_FG_BLACK);
	VideoSetBgColor(VCLR_BG_RED);
	//StringResetPos();
	StringPrint("-\\- A simple OS bootloader and kernel coded in ASM & C -/-\0");
	StringPrintPos("an X, Y (x:13, y:8) positioned string", 13, 8);
}

