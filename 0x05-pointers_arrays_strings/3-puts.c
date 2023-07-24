#include "main.h"
/**
 * _puts - print astring
 * @str: the string will be printed
 */
void _puts(char *str)
{int i;
	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
