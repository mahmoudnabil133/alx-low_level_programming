#include "main.h"
/**
 * _calloc - it callocs memmory bytes to an arr
 * @nmemb: arr size
 * @size : size of each element of arr
 * Return: poiter to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{void *ptr;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
