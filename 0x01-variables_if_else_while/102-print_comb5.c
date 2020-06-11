#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	int i1, i2, i3, i4;

	for (i1 = '0'; i1 <= '9'; ++i1)
	{
		for (i2 = '0'; i2 <= '9'; ++i2)
		{
			for (i3 = i1; i3 <= '9'; ++i3)
			{
				for (i4 = i2; i4 <= '9'; ++i4)
				{
					if (i1 != i3 || i2 != i4)
					{
						if (i1 != '0' || i2 != '0' || i3 != '0' || i4 != '1')
						{
							putchar(',');
							putchar(' ');
						}
						putchar(i1);
						putchar(i2);
						putchar(' ');
						putchar(i3);
						putchar(i4);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
