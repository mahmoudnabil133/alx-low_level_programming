#include "main.h"
#include <string.h>
/**
 * _strncpy - copy a string.
 * @dest: the destrnation
 * @src: the src
 * @n: the num of bytes that will be coppied
 * Return: the dest after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
