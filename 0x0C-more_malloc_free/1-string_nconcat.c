#include "main.h"
/**
 * string_nconcat - it concats 2 strings
 * @s1: string1
 * @s2: string2
 * @n: number of char will be concated from str2
 * Return: char pointer to a concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{unsigned int len1, len2, i, sum;
	char *c;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	if (n >= len2)
		n = len2;
	sum = len1 + n + 1;
	c = malloc(sizeof(char) * sum);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		c[i] = s1[i];
	for (i = 0; i < n; i++)
		c[i + len1] = s2[i];
	c[sum - 1] = '\0';
	return (c);
}


