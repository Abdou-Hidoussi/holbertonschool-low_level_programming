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
	int file;
	unsigned long int a, b;

	if (filename == NULL)
	{
		return (0);
	}
	c = malloc(sizeof(char) * letters);
	file = open(filename, O_RDONLY);
	if (file == 0)
	{
		return (0);
	}
	a = read(file, c, letters);
	close(file);
	b = write(1, c, letters);
	if (b == 0)
	{
		return (0);
	}
	return (a);

}
