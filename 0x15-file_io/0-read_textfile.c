#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - prints text from a file
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int len, w_chars;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	w_chars = write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(file);
	if (w_chars != len)
		return (0);
	return (length);
}
