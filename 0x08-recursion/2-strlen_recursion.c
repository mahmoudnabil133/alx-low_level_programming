#include "main.h"
/**
 * _strlen_recursion - clculate the strln
 * @s: the str will be calculated
 * Return: the strlen
 */
int _strlen_recursion(char *s)
{int len = 0;
	if (*s)
	{
		len++;
		len += 	_strlen_recursion(s + 1);
	}
	return (len);
}
