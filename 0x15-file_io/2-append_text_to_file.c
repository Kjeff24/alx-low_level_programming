#include "main.h"

/**
 * append_text_to_file - text file, append
 * @filename: name of file, points
 * @text_content: The string to add to the end of the file.
 *
 * Return:  -1.
 *         -1.
 *         1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len_th = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_th = 0; text_content[len_th];)
			len_th++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len_th);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
