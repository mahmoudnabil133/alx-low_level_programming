#include"main.h"
/**
 * main - print alphbet.
 *
 * Return: Always 0.
 */

void print_alphbet(void)
{
	int a = 'a';
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
