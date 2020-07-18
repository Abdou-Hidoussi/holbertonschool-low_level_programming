#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - 0
*@n: number of argument
*@separator: sperator string
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n - 1; ++i)
	{
		s = va_arg(ap, char*);
		if (s)
		{
			if (separator != NULL)
				printf("%s%s", s, separator);
			else
				printf("%s", s);
		}
		else
		{
			if (separator != NULL)
				printf("%s%s", "(nil)", separator);
			else
				printf("%s", "(nil)");
		}
	}
	printf("%s\n", va_arg(ap, char*));
	va_end(ap);
}
