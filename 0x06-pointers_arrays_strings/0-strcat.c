#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: pointer to the destination parameter
 * @src: pointer to the source parameter
 * Returns: returns value of dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
