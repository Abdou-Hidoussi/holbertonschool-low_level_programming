#include "holberton.h"
int main(void){
	char i;
	int j;

	for (j = 1; j <= 10; ++j)
	{
		for (i = 'a'; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');		
	}


	return (0);
}