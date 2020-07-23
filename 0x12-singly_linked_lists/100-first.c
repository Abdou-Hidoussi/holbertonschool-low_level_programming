#include <stdio.h>
/**
*tortuga - will be called before main
*/
void tortuga(void) __attribute__ ((constructor));

void tortuga(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
