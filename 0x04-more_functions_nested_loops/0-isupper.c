#include "main.h"
/**
 * _isupper - check if the arg is upper or lower
 * @c: the char will b checked
 * Return: 0if lower 1 if upper
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else if (c >= 65 && c <= 90)
		return (1);
}
