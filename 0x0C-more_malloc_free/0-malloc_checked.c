#include "main.h"
/**
 * malloc_checked - it returns a pointer to allocatd memory
 * @b: the var of size will be allocatd
 * Return: poiner to address of allocated memory
 */
void *malloc_checked(unsigned int b)
{void *c;
	c = malloc(b);
	if (c == NULL || b == 0)
		exit(98);
	return (c);
}
