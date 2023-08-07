#include "main.h"
/**
 * create_array - it creates array
 * @size: size of arr
 * @c: the char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{char *s;
	int i;
	i = 0;
	s = (char *) malloc(size * sizeof(char));
	while (i < size)
		s[i] = c;
	return (s);
}
