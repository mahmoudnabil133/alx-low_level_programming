i#include "main.h"
/**
 * more_numbers - print from 1 2 14 19 time
 */
void more_numbers(void)
{int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar (j + '0');
			else
			{
				_putchar ((j / 10) + '0');
				_putchar ((j % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
