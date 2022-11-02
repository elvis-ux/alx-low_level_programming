#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the filename
 * @text_content: sting pointer to the text in the file
 * Return: -1 if the func fails else 1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
