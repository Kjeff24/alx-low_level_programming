#include "main.h"

/**
 * create_file - creates file.
 * @filename: file created, a pointer to it
 * @text_content: write file, a pointer to it
 *
 * Return: -1.
 * 1
 */
int create_file(const char *filename, char *text_content)
{
	int fcd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fcd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fcd, text_content, len);

	if (fcd == -1 || w == -1)
		return (-1);

	close(fcd);

	return (1);
}
