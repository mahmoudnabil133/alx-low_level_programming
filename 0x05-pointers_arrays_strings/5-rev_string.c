#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string will be reversed
 */
void rev_string(char *s)
{int len, i;
	len = strlen(s);
	for (i = len - 1; i >= 0; i++)
		_putchar(s[i]);
	_putchar('\n');
}
