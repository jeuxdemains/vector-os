int SCRN_POS = VIDEO_OFFSET;

void StringSetPos(int x, int y)
{
    SCRN_POS = VIDEO_OFFSET;

    for (int i = 0; i < x; ++i)
        SCRN_POS += 2;

    for (int j = 0; j < y; ++j)
        SCRN_POS += 80*2;
}

void StringResetPos()
{
    SCRN_POS = VIDEO_OFFSET;
}

void StringPrint(const char* str)
{
    //make a check if we are within the VGA buffer, if not set it up
    if (SCRN_POS < VIDEO_OFFSET || SCRN_POS > VIDEO_OFFSET + (80*25))
        StringResetPos();

	char* vidMem = (char*)SCRN_POS;

	int letterIndex = 0;
	while(str[letterIndex] != 0x0)
	{
		*vidMem = str[letterIndex];
		++letterIndex;
		++vidMem;
		*vidMem = VideoGetTeletypeColor();
		++vidMem;
	}
}

void StringPrintPos(const char* str, int x, int y)
{
    StringSetPos(x, y);
    StringPrint(str);
}
