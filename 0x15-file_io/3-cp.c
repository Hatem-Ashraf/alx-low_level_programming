#include "main.h"
/**
  * file_to_file - copies from one to another
  * @filename1: name of the 1st file
  * @filename2: name of the 2nd file
  *
  * @Return: 1 if success, otherwise exit with a specific code
  */
int file_to_file(const char *filename1, const char *filename2)
{
	int fd1, fd2;
	ssize_t bytes;
	char buffer[1024 * 8];

	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename1);
		exit(98);
	}
	if (access(filename2, F_OK) == -1)
		fd2 = open(filename2, O_WRONLY | O_CREAT, 0664);
	else
		fd2 = open(filename2, O_WRONLY | O_TRUNC);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename2);
		exit(99);
	}
	while (bytes > 0)
	{
		bytes = read(fd1, &buffer[0], 1023);
		if (bytes == -1)
			break;
		buffer[bytes] = '\0';
		bytes = write(fd2, &buffer[0], bytes);
		if (bytes == -1)
			break;
	}
	close(fd1);
	if (fcntl(fd1, F_GETFD) != -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);

	}
	close(fd2);
	if (fcntl(fd1, F_GETFD) != -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (1);
}

/**
  * main - start point
  * @argc
  */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @ac: argc
 * @av: argv
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to_file(av[1], av[2]);
	return (0);
}
