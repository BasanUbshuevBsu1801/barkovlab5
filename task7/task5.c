#include "func.h" 
void strcat1(char* dest, int len, const char* first, const char* second)
{
	strcpy1(dest, len, first);
	unsigned firstLen = strlen1(first);
	strcpy1(dest + firstLen, len - firstLen, second);
}
