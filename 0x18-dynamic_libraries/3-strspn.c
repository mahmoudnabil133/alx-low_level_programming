#include "main.h"
#include <string.h>
/**
 * _strspn - return num of pytes in the initial segment of s
 * @s: str1
 * @accept: str2
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
