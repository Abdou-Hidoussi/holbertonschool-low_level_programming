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

int i;
unsigned int sum = 0;

for (i = 1; i < argc; i++)
{
	if (*argv[i] >= 48 && *argv[i] <= 57)
		sum += atoi(argv[i]);
	else
	{
		printf("Error\n");
		return (1);
	}
}
printf("%d\n", sum);

return (sum);
}
