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
	unsigned int i = 0;
	char *s;
	va_list ap;

	va_start(ap, 0);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				if (format[i + 1])
					printf(", ");
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				if (format[i + 1])
					printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				if (format[i + 1])
					printf(", ");
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				if (format[i + 1])
					printf(", ");
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
