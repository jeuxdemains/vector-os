const int VIDEO_OFFSET = 0xb8000;

void CleanScreen();
void PrintString(const char* str);
void Prompt();

void main () 
{
	CleanScreen();
	PrintString("# A simple OS bootloader and kernel coded in ASM & C #\0");
}

void CleanScreen()
{
	char* vidMem = (char *)VIDEO_OFFSET;
	for (int i = 0; i < 80*25; ++i)
	{
		vidMem += 2;
		*vidMem = ' ';
	}
}

void PrintString(const char* str)
{
	char* vidMem = (char*)VIDEO_OFFSET;
	
	int cnt = 0;
	while(str[cnt] != 0x0)
	{
		*vidMem = str[cnt];
		++cnt;
		++vidMem;
		*vidMem = 0x30;
		++vidMem;
	}
}

void Prompt()
{
    
}
