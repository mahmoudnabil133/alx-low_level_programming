#include "main.h"
/**
 * binary_to_uint - it convert bin to uint.
 * @b: ptr ro bin num.
 * Return: uint num or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{unsigned int dec = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}
