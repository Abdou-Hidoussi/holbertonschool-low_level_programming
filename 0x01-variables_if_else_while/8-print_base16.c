#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	for (int i = '0'; i - 1 < '9'; ++i)
	{
		putchar(i);
	}
	for (int i = 'a'; i - 1 < 'f'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}