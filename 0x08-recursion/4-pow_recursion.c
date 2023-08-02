#include "main.h"
/**
 * _pow_recursion - calc the pow of a num
 * @x: nyum1
 * @y: num2
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	y--;
	return (x * _pow_recursion(x));
}
