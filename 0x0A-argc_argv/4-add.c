#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - 0
*@argc: number of strings
*@argv: number of arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i, r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	r = 0;
	while (i < argc)
	{
		r += atoi(argv[i]);
		i++;
	}
	printf("%d\n", r);
	return (0);
}
