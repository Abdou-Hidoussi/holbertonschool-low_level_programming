#include <stdio.h>

int main()
{
	int i;
	long long int j,z,t,r;
	
	z = 1;
	j = 1;
	t = z;
	for (i = 3; j < 4000000; ++i)
	{

			j = j + t;
			t = z;
			z = j;
			if (t % 2 == 1)
			{
				r += t;
			}				
			
	}
	printf("%lld\n",r + 1);
	return (0);
}