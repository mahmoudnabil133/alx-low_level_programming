#include"variadic_functions.h"
/**
 * print_numbers - it prints nums
 * @separator: the sep
 * @n: num of op args
 * Return: notiong.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{unsigned int i;
	int x;
	va_list ap;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);
		printf("%d", x);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
