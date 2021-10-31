#include "func.h" 
void delete1(char* str, const char* substr)
{
	int substrlen = strlen1(substr);
	char* point = find1(str, substr);

	for (int i = 0; *(point + substrlen + i) != 0; i++)
	{
		*(point + i) = *(point + substrlen + i);
		*(point + substrlen + i) = 0;
	}
}
