#include "main.h"

/**
  * create_file - creates a file and writes a content in it
  * @filename: filename
  * @text_content: content of the text
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;
	int i;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == -1)
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
	else
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	for (i = 0; text_content[i]; i++)
		;
	bytes = write(fd, &text_content[0], i);
	if (bytes == -1)
		return (-1);
	close(fd);
	return (1);


}
