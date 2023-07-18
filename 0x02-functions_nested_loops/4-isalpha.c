#include "main.h"

/**
 * _isalpha - check the character is alphabetic or not
 *
 * @c : is the character to check
 * Return:1 if alphabet & 0 if not
 *
 */

int _isalpha(int c)
{
	if (c >= ('a' || 'A') &&  c <= ('z' || 'Z'))
		return (1);
	else
		return (0);
}
