#include "main.h"
#include <string.h>
/**
 * _strpbrk - it return apointer to byte in s that matches any byte in accept
 * @s: string1
 * @accept: string2
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
