#include "main.h"
#include <string.h>
/**
 * _strstr - find the first occurence of substring needle
 * @haystack: first str
 * @needle:second str
 * Return: a string
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
