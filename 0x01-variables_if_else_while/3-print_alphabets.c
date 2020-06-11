#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	for (int i = 'a'; i < 'z'; ++i)
	{
		putchar(i);
	}
	for (int i = 'A'; i - 1 < 'Z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
