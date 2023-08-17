#include "variadic_functions.h"
/**
 * print_strings - it print a string
 * @separator: the sep
 * @n: num of optional args
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
