#include "main.h"
/**
  * read_textfile - reads a text from a file
  * @filename: filename
  * @letters: number of chars to be read
  *
  * Return: No of chars printed or 0 if fail
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024 * 8];
	ssize_t bytes;

	if (!filename || !letters)
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buffer[0], letters);
	if (bytes == -1)
		return (0);
	bytes = write(fd, &buffer[0], bytes);
	if (bytes == -1)
		return (0);
	close(fd);
	return (bytes);
}
