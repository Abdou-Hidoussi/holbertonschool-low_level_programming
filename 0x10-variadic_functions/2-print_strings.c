#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - 0
*@n: number of argument
*@separator: separator string
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(ap, char*);

			if (str)
			{
				printf("%s", str);
			}
			else
			{
				printf("%s", "(nil)");
			}
			if (i < n - 1)
			{
				printf("%s", separator);
			}
	}
	printf("\n");
	va_end(ap);
}
