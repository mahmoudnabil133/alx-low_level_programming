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
	if (s[i + 1] != '\0' && (s[i] == '\n' || s[i] == '\t'))
		s[i + 1] = s[i + 1] - 32;
	if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == '.')
		s[i] = s[i] - 32;
	if (s[i] >= 'a' && s[i] <= 'z' && (s[i - 1] == ' '))
		s[i] = s[i] - 32;
	i++;
	return (s);
}
