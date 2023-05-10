#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- print 2 STDOUT.
 * @filename: text file in question
 * @letters: letters to read
 * Return: actual bytes read & printed
 *        0 failure or filename == NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
