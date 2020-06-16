#include <stdio.h>

void display(int a2, int b2, int c2)
{
	if (a2 > 0)
	{
		printf("%d%07d%07d, ", a2, b2, c2);
	}
	else if (b2 > 0)
	{
		printf("%d%07d, ", b2, c2);
	}
	else
	{
		printf("%d, ", c2);
	}

}



int main(void)
{
	int i = 0, a = 0, a1 = 0, a2 = 0, b = 0, b1 = 0, b2 = 0, c = 1, c1 = 1, c2 = 0;

	while (i <= 98)
	{
		if (c + c1 > 10000000)
		{
			b2 = (c + c1) / 10000000;
			c2 = (c + c1) % 10000000;
			if (b + b1 >= 10000000)
			{
				a2 = (b + b1) / 10000000;
				b2 += (b + b1) % 10000000;
				a2 += a + a1;
				display(a2, b2, c2);
			}
			else
			{
				b2 += b + b1;
				a2 = a + a1;
				display(a2, b2, c2);
			}
		}
		else
		{
			c2 = c + c1;
			if (b + b1 >= 10000000)
			{
				a2 = (b + b1) / 10000000;
				b2 = (b + b1) % 10000000;
				a2 += a + a1;
				display(a2, b2, c2);
			}
			else
			{
				b2 = b + b1;
				a2 = a + a1;
				display(a2, b2, c2);
			}
		}
		c = c1;
		c1 = c2;
		b = b1;
		b1 = b2;
		a = a1;
		a1 = a2;
		i++;
	}
	printf("\n");
	return (0);
}
