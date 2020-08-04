#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
/**
*create_file - 0
*@filename: filename
*@text_content: content
*Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, a;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; ++i)
			;
		a = write(file, text_content, i);
		if (a == -1)
			return (-1);
	}
	close(file);
	return (1);
}
