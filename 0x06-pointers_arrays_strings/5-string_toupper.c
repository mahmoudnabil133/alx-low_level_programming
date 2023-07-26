#include "main.h"
/**
 * string_toupper - convert from lower to upper
 * @s: the string will be uppered
 * Return: the uppercase string
 */
char *string_toupper(char *s)
{int i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
