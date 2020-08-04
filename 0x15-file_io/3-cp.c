#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
*main - 0
*@argc: number of arguments
*@argv: list of argument
*Return: int
*/
int main(int argc, char const *argv[])
{
	int rd, wr, cl, file_to, file_from;
	char *text[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	rd = read(file_from, text, 1024);
	while (rd > 0)
	{
		rd = read(file_from, text, 1024);
		wr = write(file_to, text, rd);
		if (wr == -1 || file_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cl = close(file_from);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", cl);
		exit(100);
	}
	cl = close(file_to);
	if (cl == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", cl);
		exit(100);
	}
	return (0);
}
