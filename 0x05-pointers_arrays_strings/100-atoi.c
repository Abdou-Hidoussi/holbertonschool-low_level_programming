#include "holberton.h"
/**
*incase - breaking the code into segment
*@s: input string
*@num: the current number
*Return: the int
*/
int incase(char *s, int num)
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
	return (num);
}
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
			num = incase(s, num);
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
