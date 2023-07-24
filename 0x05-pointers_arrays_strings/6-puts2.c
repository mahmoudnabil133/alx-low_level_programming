#include "main.h"
/**
 * puts2 - print 1 by 2 character
 * @str: the string will be displayed
 */
void puts2(char *str)
{int i, cnt;
	while (str[cnt] != '\0')
		cnt++;
	for (i = 0; i < cnt ; i = i + 2)
	{
		if (i > cnt - 1)
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
