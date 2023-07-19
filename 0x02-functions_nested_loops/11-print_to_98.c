# include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: the number we will start counting from
 */
void print_to_98(int n)
{
    if (n < 99)
    {
        int i;
        for (i = n; i<99 ; i++)
        {
            if (i < 10)
            {
                _putchar (i + '0');
            }
            else
            {
                _putchar (i / 10 + '0');
                _putchar (i %10 + '0');
            }
            if (i != 98)
            {
                _putchar (',');
                _putchar (' ');
            }
        }
        _putchar ('\n');
    }
    else
    {
        int i;
        for (i = n; i > 97; i--)
        {
            if (i > 99)
            {
                _putchar (i / 100 + '0');
                _putchar (((i / 100) %10) + '0');
                _putchar (i % 10 + '0');
            }
            else
            {
                _putchar (i / 10 + '0');
                _putchar (i % 10 + '0');
            }
            if (i != 98)
            {
                _putchar (',');
                _putchar (' ');
            }
        }
        _putchar ('\n');
        }
    }
