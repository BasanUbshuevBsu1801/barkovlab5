#include "func.h" 
_Bool insert1(const char *src, const char *str, int index, char *dest, int len)
{
	unsigned int strLenght = strlen1(str);
	unsigned int srcLen = strlen1(src);

	if ((strLenght + srcLen > len) || (index > strLenght)) { return 0; }
	char* point = dest;

	strcpy1(point, srcLen - index, src);
	point += index;

	strcpy1(point, strLenght, str);
	point += strLenght;

	strcpy1(point, len, src + index);

}
