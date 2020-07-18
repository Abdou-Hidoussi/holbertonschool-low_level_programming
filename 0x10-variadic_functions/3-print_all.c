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

	va_start(ap, format);
	while (format && format[i])
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
				s = va_arg(ap, char*);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
