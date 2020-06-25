#include "holberton.h"
/**
*string_toupper - 0
*@r: string
*Return: string
*
*/
char *leet(char *r)
{
	char a[122];
	int i;

	a['a'] = '4';
	a['A'] = '4';
	a['e'] = '3';
	a['E'] = '3';
	a['o'] = '0';
	a['O'] = '0';
	a['l'] = '1';
	a['L'] = '1';
	a['t'] = '7';
	a['T'] = '7';

	i = 0;
	while (r[i] != 0)
	{
		if (r[i] == 'a' || r[i] == 'A' ||
			r[i] == 'e' || r[i] == 'E' ||
			r[i] == 'o' || r[i] == 'O' ||
			r[i] == 'l' || r[i] == 'L' ||
			r[i] == 't' || r[i] == 'T')
		{
			
			r[i] = a[r[i]];
		}
		i++;
	}
	return r;
}
