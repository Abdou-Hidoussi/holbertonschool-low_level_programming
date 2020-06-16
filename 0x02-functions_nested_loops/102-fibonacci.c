#include <stdio.h>

int main()
{
	int i;
	long long int j,z,t;
	
	z = 1;
	j = 1;
	t = z;
	printf("1, ");
	for (i = 3; i < 50; ++i)
	{
		if (i < 49)
		{
			j = j + t;
			printf("%lld, ", j);
			t = z;
			z = j;			
		}
		else
		{
			j = j + t;
			printf("%lld", j);
			t = z;
			z = j;				
		}

	}
	printf("\n");
	return (0);
}