#include "video.c"
#include "screen.c"
#include "string.c"

void main ()
{
	//ScreenClear();
	VideoSetFgColor(VCLR_FG_GREEN);
	ScreenFill();
	VideoSetFgColor(VCLR_FG_LIGHTCYAN);
	VideoSetBgColor(VCLR_BG_MAGENTA);
	StringPrint("# A simple OS bootloader and kernel coded in ASM & C #\0");
}

