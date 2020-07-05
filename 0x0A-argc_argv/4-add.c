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
	int i, j, r;

	i = 1;
	r = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		r += atoi(argv[i]);
		i++;
	}
	printf("%d\n", r);
	return (0);
}
