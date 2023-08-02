#include "main.h"
/**
 * _puts_recursion - it print a string with rec
 * @s: the string will be passed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(*s + 1);
}
