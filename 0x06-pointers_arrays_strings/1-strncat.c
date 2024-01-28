#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination parameter.
 * @src: source parameter.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0, counter2 = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}

	while (counter2 < n)
	{
		*(dest + counter) = *(src + counter2);
		if (*(src + counter2) == '\0')
			break;
		counter++;
		counter2++;
	}
	return (dest);
}
