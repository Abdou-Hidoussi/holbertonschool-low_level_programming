#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_all - 0
*@format: format of argument
*
*/
void print_all(const char * const format, ...)
{
	unsigned int len = 0, i = 0;
	va_list ap;

	while (format[len] != '\0')
	{
		len++;
	}
	va_start(ap, 0);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				printf("%s", va_arg(ap, char*));
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
