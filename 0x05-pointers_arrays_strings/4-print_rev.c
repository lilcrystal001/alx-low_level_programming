#include <stdio.h>
#include <string.h>

void print_rev(char *s);
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
	printf("%c", s[i]);
	}

	printf("\n");
}
