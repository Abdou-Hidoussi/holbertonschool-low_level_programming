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

	i = 1;
	r = 0;
	while (i < argc)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			r += atoi(argv[i]);
			i++;
		}
		else
		{
			printf("Error\n");
			return (1);
			break;
		}

	}
	printf("%d\n", r);
	return (0);
}
