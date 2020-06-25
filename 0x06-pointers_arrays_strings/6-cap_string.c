#include "holberton.h"
/**
*cap_string - 0
*@r: string
*Return: string
*
*/
char *cap_string(char *r)
{
	int i;

	i = 1;
	if (r[0] >= 'a' && r[0] <= 'z')
	{
		r[0] = r[0] - 'a' + 'A';
	}
	while (r[i] != 0)
	{
		if (r[i - 1] == ' ' || r[i - 1] ==  ',' ||
		r[i - 1] ==  ';' || r[i - 1] ==  '.' || r[i - 1] ==  '!' ||
		r[i - 1] ==  '?' || r[i - 1] ==  '(' || r[i - 1] ==  ')' ||
		r[i - 1] ==  '{' || r[i - 1] ==  '}' ||
		r[i - 1] == 9 || r[i - 1] == 10 ||  r[i - 1] == 0 || r[i - 1] == 32)
		{
			if (r[i] >= 'a' && r[i] <= 'z')
			{
				r[i] = r[i] - 'a' + 'A';
			}
		}
		i++;
	}

	return (r);
}
