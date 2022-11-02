#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to posix stdout
 * @filename: pointer to file name
 * @letters: no of letters func should read and print
 * Return: null, if the func fails
 * o/w - actual no. of bytes the func can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char  *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (o == -1 || r ==-1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}

