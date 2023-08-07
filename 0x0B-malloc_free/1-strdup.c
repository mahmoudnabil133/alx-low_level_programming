#include "main.h"
#include <string.h>
/**
 * _strdup - it dubils a string
 * @str: pointer will be dubeled
 * Return: a pntr
 */
char *_strdup(char *str)
{int n, i;
	char *str2;
	n = strlen(str) + 1;
	str2 = malloc(n * sizeof(char));	
	i = 0;
	while (i < n)
	{str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	if (str == NULL)
		return (NULL);
	else
		return (str2);
}
