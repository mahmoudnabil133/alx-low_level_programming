#include "main.h"
#include <string.h>
/**
 * _strdup - it dubils a string
 * @str: pointer will be dubeled
 * Return: a pntr
 */
char *_strdup(char *str)
{int n;
	char *str2;
	n = strlen(str);
	str2 = malloc(n * sizeof(char));
	int i = 0;
	while (i < n)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	if (n == 0)
		return (NULL);
	else
		return (str2);
}
