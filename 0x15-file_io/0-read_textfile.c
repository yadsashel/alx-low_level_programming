#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char buffer[letters];
	ssize_t bytes_read = read(fd, buffer, letters);
	close(fd);

	if (bytes_read == -1)
		return (0);

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}

