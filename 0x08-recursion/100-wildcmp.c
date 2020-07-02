#include "holberton.h"
/**
*comp - 0
*@s1: char *
*@s2: char *
*@i: int
*@j: int
*Return: int
*/
int comp(char *s1, char *s2, int i, int j)
{
	if ((s1[i] == '\0' && s2[j] == '\0')
		|| (s1[i] == '*' && s1[i + 1] == '\0')
		|| (s2[j] == '*' && s2[j + 1] == '\0'))
	{
		return (1);
	}
	if (s1[i] == '*')
	{
		return (comp(s1, s2, ++i, ++j));
	}
	if (s2[j] == '*')
	{
		return (comp(s1, s2, ++i, ++j));
	}
	if (s1[i - 1] == '*' && s1[i] != s2[j])
	{
		return (comp(s1, s2, i, ++j));
	}
	if (s2[j - 1] == '*' && s1[i] != s2[j])
	{
		return (comp(s1, s2, ++i, j));
	}
	if (s1[i - 1] == '*' && s1[i] == s2[j])
	{
		return (comp(s1, s2, ++i, ++j));
	}
	if (s2[j - 1] == '*' && s1[i] == s2[j])
	{
		return (comp(s1, s2, ++i, ++j));
	}
	if (s1[i] == s2[j])
	{
		return (comp(s1, s2, ++i, ++j));
	}
	return (0);
}
/**
*wildcmp - 0
*@s1: char *
*@s2: char *
*Return: int
*/
int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	return (comp(s1, s2, 0, 0));
}
