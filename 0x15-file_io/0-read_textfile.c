#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- STDOUT read.
 * @filename: text file being read
 * @letters: letters to read
 * Return: w- bytes to read
 *        0 is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu_f;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bu_f = malloc(sizeof(char) * letters);
	t = read(fd, bu_f, letters);
	w = write(STDOUT_FILENO, bu_f, t);

	free(bu_f);
	close(fd);
	return (w);
}
