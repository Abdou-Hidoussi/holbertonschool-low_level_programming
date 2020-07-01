#include "holberton.h"
/**
* no - the true square
*@i: counter
*@n: the square
* Return: int
*/
int no(int n, int i)
{
if (i < 0)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (no(n, i - 1));
}
/**
*_sqrt_recursion - the true square
*@n: the square
* Return: int
*/
int _sqrt_recursion(int n)
{
return (no(n, n));
}
