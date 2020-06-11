#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	for (int i = 'a'; i - 1 < 'z'; ++i)
	{
		if ((i != 'q') && (i != 'e'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
