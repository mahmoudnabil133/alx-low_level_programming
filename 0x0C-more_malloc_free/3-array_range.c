#include "main.h"
/**
 * array_range - it allocate mem for mem of an arr
 * @min: the lowest num
 * @max: the max num
 * Return: pointer to allocated mem
 */
int *array_range(int min, int max)
{int *ptr, sum, i, j;
	if (min > max)
		return (NULL);
	sum = max - min + 1;
	ptr = malloc(sum * sizeof(int));
	for (i = min, j = 0; i <= max; i++, j++)
		ptr[j] = i;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
