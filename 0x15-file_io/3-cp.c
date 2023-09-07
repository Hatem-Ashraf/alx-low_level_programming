#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * file_to_file - copies from one to another
  * @filename1: name of the 1st file
  * @filename2: name of the 2nd file
  *
  * Return: 1 if success, otherwise exit with a specific code
  */
void file_to_file(const char *filename1, const char *filename2)
{
	int fd1, fd2;
	ssize_t bytes = 1;
	char buffer[1024];

	fd1 = open(filename1, O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1), exit(98);
	if (access(filename2, F_OK) == -1)
	{
		fd2 = open(filename2, O_WRONLY | O_CREAT);
		if (fchmod(fd2, 0664) != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			exit(99);
		}
	}
	else
		fd2 = open(filename2, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2), exit(99);
	while (bytes > 0)
	{
		bytes = read(fd1, &buffer[0], sizeof(buffer) - 1);
		if (bytes <= 0)
			break;
		buffer[bytes] = '\0';
		bytes = write(fd2, &buffer[0], bytes);
		if (bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2), exit(99);
	}
	close(fd1);
	if (fcntl(fd1, F_GETFD) != -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	close(fd2);
	if (fcntl(fd2, F_GETFD) != -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
}

/**
  * main - start point
  * @ac: argc
  * @av: argv
  *
  * Return: always 0
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
