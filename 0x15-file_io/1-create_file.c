#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success,
 * -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(fd, text_content, n);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
