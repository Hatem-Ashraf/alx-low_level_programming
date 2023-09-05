#include "main.h"
/**
  * append_text_to_file - Appends text to a file
  * @filename: filename
  * @text_content: Content of a file to be appended
  *
  * Return: 1 if success, otherwise -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes;

	if (!filename)
		return (-1);
	if (access(filename, F_OK) == -1)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		bytes = write(fd, &text_content, len);
		if (bytes == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
