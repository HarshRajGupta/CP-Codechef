#include <stdio.h>

int main(void)
{
	short i = -32768;
	if (--i > -32768)
	printf("%d", i);
}