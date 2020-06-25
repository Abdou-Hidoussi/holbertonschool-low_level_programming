#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*printRandoms - 0
*@lower: int
*@upper: int
*/
void printRandoms(int lower, int upper)
{
int sum, i;
char c;
sum = 0;
c = (rand() % (upper - lower + 1)) + lower;
putchar(c);

sum += c;
while (sum < 2772 - 123)
{
c = (rand() % (upper - lower + 1)) + lower;
sum += c;
putchar(c);
}

while (sum + c != 2772)
{
c++;
}
sum += c;
putchar(c);
}
/**
*main - 0
*Return: 0
*/
int main(void)
{
int lower, upper;
lower = 'A';
upper = 'z';

srand(time(0));

printRandoms(lower, upper);

return (0);
}
