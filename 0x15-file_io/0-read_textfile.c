#include "main.h"
/**
  * 
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
	bytes = read(fd, buffer, letters);
	if (bytes == -1)
		return (0);
	bytes = write(fd, buffer, bytes);
	if (bytes == -1)
		return (0);
	close(fd);
	return (bytes);
}
