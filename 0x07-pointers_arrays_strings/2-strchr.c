#include "main.h"
#include <string.h>
/**
 * _strchr - return a pointer to the first occurance of string
 * @c: the character will be passed to the function
 * Return: string from the first char c in the string
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

