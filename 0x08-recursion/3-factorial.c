#include "main.h"
/**
 * factorial - calc the fact of int
 * @n: the num will be passed
 * Return: the fact
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * (factorial(n - 1)));
}
