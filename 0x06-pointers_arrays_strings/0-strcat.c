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
	char *dest_last = dest;

	while (*dest_last != "\0")
	{
		*dest_last++;
	}

	while (*src != "\0")
	{
		*dest_last = *src;
		*dest_last++;
		*src++;
	}

	dest_last = "\0";

	return (dest);
}
