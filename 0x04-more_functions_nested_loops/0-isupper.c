#include "main.h"
/**
 * _isupper - check if the arg is upper or lower
 * @c: the char will b checked
 * Return: 0if lower 1 if upper
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (1);
}
