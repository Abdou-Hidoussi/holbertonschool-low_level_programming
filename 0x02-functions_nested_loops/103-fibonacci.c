#include <stdio.h>
/**
*main - 0
*
*Return: 0
*/
int main(void)
{
	long int i, j, z, t, r;

	z = 1;
	j = 1;
	t = z;
	i = 3;
	while (i <= 4000000)
	{
		j = j + t;
		t = z;
		z = j;
		if (t % 2 != 0)
		{
			r += t;
		}
		i++;
	}
	printf("%ld\n", r);
	return (0);
}
