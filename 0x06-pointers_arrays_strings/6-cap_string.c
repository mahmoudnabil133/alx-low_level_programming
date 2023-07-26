#include "main.h"
/**
 * cap_string - cap the string
 * @s: the string will be capped
 * Return: the capped
 */
char *cap_string(char *s)
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
	}
	return (s);
}
