#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	for (int i = 'z'; i + 1 > 'a'; --i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
