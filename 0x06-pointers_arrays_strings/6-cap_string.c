#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * @iterate: iteration
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int iterate = 0, a;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + iterate) >= 97 && *(s + iterate) <= 122)
		*(s + iterate) = *(s + iterate) - 32;
	iterate++;
	while (*(s + iterate) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + iterate) == sep_words[a])
			{
				if ((*(s + (iterate + 1)) >= 97) && (*(s + (iterate + 1)) <= 122))
					*(s + (iterate + 1)) = *(s + (iterate + 1)) - 32;
				break;
			}
		}
		iterate++;
	}
	return (s);
}
