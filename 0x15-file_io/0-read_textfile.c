#include "main.h"
/**
 * read_textfile - reads textfile and prints to POSIX
 * @filename: name to file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(letters);
	ssize_t bytes_read = read(fd, buffer, letters);

	if (filename == NULL)
		return (0);
	if (fd == -1)
		return (0);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}

