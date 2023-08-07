#include "main.h"
/**
 * create_array - it creates array
 * @size: size of arr
 * @c: the char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{char *s;
	s = (char *) malloc(size * sizeof(char));
	int i = 0;
	while (i < size) s[i] = c;
	return (s);
}
