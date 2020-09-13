void StringPrint(const char* str)
{
	char* vidMem = (char*)VIDEO_OFFSET;

	int cnt = 0;
	while(str[cnt] != 0x0)
	{
		*vidMem = str[cnt];
		++cnt;
		++vidMem;
		*vidMem = VideoGetTeletypeColor();
		++vidMem;
	}
}
