#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analised string.
 *
 * Return: String with all letters in Uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}

