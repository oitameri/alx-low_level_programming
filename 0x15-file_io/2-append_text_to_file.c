#include "main.h"

/**
 * append_text_to_file - put text at end of file.
 * @filename: pointer to filename.
 * @text_content: string added to end of file.
 *
 * Return: function failure or filename == NULL return -1.
 *         file does not existor user does not have write permission return -1.
 *         Otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
