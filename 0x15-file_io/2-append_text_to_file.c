#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to ad at the end of file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		len = write(file, text_content, inlen);
	}

	if (close(file) == -1 || inlen != len)
		return (-1);
	return (1);
}
