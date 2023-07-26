#include "main.h"
/**
 * reverse_array - reverse the arr
 * @a: the arr
 * @n: the size of arr
 */
void reverse_array(int *a, int n)
{int i, j, k;
	j = (n - 1);
	k = 0;
	for (i = 0; i < n / 2; i++)
	{
		k = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = k;
		j--;
	}
}
