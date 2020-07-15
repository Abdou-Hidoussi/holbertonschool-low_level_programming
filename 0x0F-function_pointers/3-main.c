#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - 0
*@argc: argument number
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		exit(99);
	}
	printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
