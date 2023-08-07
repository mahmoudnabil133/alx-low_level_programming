#include "main.h"
#include <string.h>
/**
 * str_concat - it concats a string
 * @s1: string1
 * @s2: string2
 * Return: a compleated string
 */
char *str_concat(char *s1, char *s2)
{int n1, n2, i = 0, sum;
	n1 = strlen(s1);
	n2 = strlen(s2);
	sum = n1 + n2 + 1;
	char *s3;
	s3 = malloc(sum * sizeof(char));
	while (i < n1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < sum - 1)
	{
		s3[i] = s2[i - n1];
		i++;
	}
	s3[sum] ='\0';
	if (s1 == NULL || s2 == NULL)
		return (NULl);
	else
		return (s3);
}

