#include "main.h"
#include <string.h>
/**
 * _strcat - it merde 2 strings
 * @dest: the dest
 * @src: the src
 * Return: the merged str
 */
char *_strcat(char *dest, char *src)
{char *cmp;
	cmp = strcat(dest, src);
	return (cmp);
}
