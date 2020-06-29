#include "holberton.h"
/**
*_strstr - 0
*@haystack: string
*@needle: string
*Return: string
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[j])
		{
			if (needle[j] == '\0')
			{
				return (&haystack[j]);
			}
			j++;
		}
		i++;
	}

	return ('\0');
}
