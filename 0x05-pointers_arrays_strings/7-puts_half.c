#include "main.h"
/**
 * puts_half - it prints half of the string
 * @str: the string that will be halfed
 */
void putss_half(char *str)
{int i, j, cnt;
	cnt = 0;
	while (str[cnt] != '\0')
		cnt ++;
	j = cnt / 2;
	for (i = j; i < cnt; i++)
	       _putchar(str[i]);
	_putchar('\n');
}	
