#include "main.h"
#include <string.h>
/**
 * _strncat - merges 2 stings with the n bytes
 * @dest: str1
 * @src: str2
 * @n: the n bytes
 * Return: the merged str according to n
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
