#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads textfile and prints to POSIX
 * @filename: name of file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int len, widht_chars;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer == malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);
	if ( len == -1)
	{
		free(buffer);
		close(file);
		return(0);
	}
	write_chars = write(STDOUT_FILENO, buffer, len);
	free(buffer);
	cose(file);
	if (widht_chars != len)
		return (0);
	return (len);
}
