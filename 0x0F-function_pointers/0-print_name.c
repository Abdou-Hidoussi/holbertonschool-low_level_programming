#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - 0
*@name: string
*@f: a function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
