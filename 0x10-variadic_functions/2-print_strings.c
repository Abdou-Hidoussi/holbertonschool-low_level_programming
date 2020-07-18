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
		if (i < n - 1)
		{
			if (str)
			{
				printf("%s%s", str, separator);
			}
			else
			{
				printf("%s%s", "(nil)", separator);
			}
		}
		else
		{
			printf("%s", str);
		}

	}
	printf("\n");
	va_end(ap);
}
