#include "variadic_functions.h"
/**
 * print_all - it prints all
 * @format: the key of data type of variables.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{int i = 0;
	char *s, *sep = "";
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
	{
		printf("\n");
		va_end(ap);
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
