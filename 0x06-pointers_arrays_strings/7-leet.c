#include "main.h"
/**
 * leet - do leet
 * @s: the str
 * Return: char
 */
char *leet(char *s)
{int i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 52;
		if (s[i] == 'e' || s[i] == 'E')
			s[i] = 51;
		if (s[i] == 'o' || s[i] == 'O')
			s[i] = 48;
		if (s[i] == 't' || s[i] == 'T')
			s[i] = 55;
		if (s[i] == 'l' || s[i] == 'L')
			s[i] = 49;
		i++;
	}
	return (s);
}
