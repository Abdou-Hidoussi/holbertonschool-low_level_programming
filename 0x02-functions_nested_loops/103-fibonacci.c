#include <stdio.h>

int main()
{
	int i;
	long long int j,z,t,r;
	
	z = 1;
	j = 1;
	t = z;
	i = 3;
	while(j <= 4000000)
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
	printf("%lld\n",r);
	return (0);
}