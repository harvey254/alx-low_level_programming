#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string
 * Return: Success (1), -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));


	if (filename == NULL | fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

