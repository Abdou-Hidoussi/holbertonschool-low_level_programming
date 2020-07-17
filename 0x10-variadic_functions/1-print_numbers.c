#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - 0
*@n: number of argument
*@separator: sperator string
*Return: sum of arg
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n - 1; ++i)
	{
		if (separator != NULL)
			printf("%i%s", va_arg(ap, int), separator);
		else
			printf("%i", va_arg(ap, int));
	}
	printf("%i\n", va_arg(ap, int));
	va_end(ap);
}
