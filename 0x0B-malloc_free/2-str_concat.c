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
	s3 = malloc(
