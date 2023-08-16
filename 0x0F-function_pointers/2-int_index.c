#include "function_pointers.h"
/**
 * int_index - show the index wich match func that cmp_pointer points to
 * @array: the arr we iterate
 * @size: size of arr
 * @cmp: function pointer.
 * Return: index of matched num or -1 if size<=0 or no matching element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{int i, c;
	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
			return (i);
	}
		return (-1);
}
