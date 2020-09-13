void FillScreen();
void CleanScreen();

void ScreenFill()
{
    char* vidMem = (char*)VIDEO_OFFSET;

    int cnt = 0;
    while(cnt < 80*25)
    {
        *vidMem = 0xDB; //a filled square: █
        ++vidMem;
        *vidMem = VideoGetTeletypeColor();
        ++vidMem;
        ++cnt;
    }
}

void ScreenClear()
{
	char* vidMem = (char *)VIDEO_OFFSET;
	for (int i = 0; i < 80*25; ++i)
	{
		vidMem += 2;
		*vidMem = ' ';
	}
}
