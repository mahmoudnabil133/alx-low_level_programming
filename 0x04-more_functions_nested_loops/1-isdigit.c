#include "main.h"
/**
 * _isdigit - check if the arg is gig or not
 * @c: the char will be checked
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
