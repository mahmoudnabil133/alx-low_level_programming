#include "main.h"
/**
 * binary_to_uint - it convert bin to uint.
 * @b: ptr ro bin num.
 * Return: uint num or 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{unsigned int dec = 0;
	int i;
	double j = 0.0;
	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec += ((b[i] - '0') * pow (2.0, j));
		j++;
	}
	return (dec);
}
