/**
*_atoi - convert string to int
*@s: input string
*Return: the int
*/
int _atoi(char *s)
{
	int signe, num;

	signe = 1;
	num = 0;
	while (*s != '\0')
	{
		if (*s == '-')
		{
			signe *= -1;
		}
		while (*s >= '0' && *s <= '9')
		{
		if (*s >= '0' && *s <= '9')
		{
			switch (*s)
			{
				case '0':
				num = num * 10 + 0;
				break;
				case '1':
				num = num * 10 + 1;
				break;
				case '2':
				num = num * 10 + 2;
				break;
				case '3':
				num = num * 10 + 3;
				break;
				case '4':
				num = num * 10 + 4;
				break;
				case '5':
				num = num * 10 + 5;
				break;
				case '6':
				num = num * 10 + 6;
				break;
				case '7':
				num = num * 10 + 7;
				break;
				case '8':
				num = num * 10 + 8;
				break;
				case '9':
				num = num * 10 + 9;
				break;
			}
		}			
			s++;
			if (!(*s >= '0' && *s <= '9'))
			{
				return (num * signe);
			}
		}
		s++;
	}
	return (0);
}

#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _atoi("-+---+--5-+++Battery Street; San 5Francisco,");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    return (0);
}

