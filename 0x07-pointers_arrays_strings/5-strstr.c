#include "holberton.h"
/**
*_strstr - 0
*@haystack: string
*@needle: string
*Return: string
*/
char *_strstr(char *haystack, char *needle)
{
	if (needle[0] == '\0')
	{
		return (haystack);
	}

	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}

	return (0);
}
