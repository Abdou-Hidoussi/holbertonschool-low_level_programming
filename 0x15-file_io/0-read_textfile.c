#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
*read_textfile - 0
*@filename: filename
*@letters: number of letters
*Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	int file, b;
	unsigned long int a;

	if (!filename)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	if (!c)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	a = read(file, c, letters);
	close(file);
	b = write(1, c, letters);
	if (b == -1)
	{
		return (0);
	}
	return (b);

}
