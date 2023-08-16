#include "function_pointers.h"
/**
 * array_iterator - it iterates array
 * @array: the arr will be iterated
 * @size: size off arr
 * @action: function pointer that points to function will be excuted
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{size_t i;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
