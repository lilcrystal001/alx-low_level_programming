include "main.h"

/**
 * _strchr - searches for a character in string 
 *
 * @c: character found
 *
 * @s: string
 *
 * Return: a pointer to the character if found
 * in the string or return string if NULL
 *
 */

char *_strchar (char *s, char c)
{
	while (*S)
	{
		if (*S != c)
		s++;
	else
		return (s);
	}

	if ( c == '\0')

		return (s);

	return (NULL);
}
