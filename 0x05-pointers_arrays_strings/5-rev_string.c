#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string will be reversed
 */
void rev_string(char *s)
{int len, i, j;
	char *str2;
	len = strlen(s);
	j = 0;
	for (i = len - 1; i >= 0; i++)
	{
		str2[j] = s[i];
		j++;
	}
	s = str2;

}
