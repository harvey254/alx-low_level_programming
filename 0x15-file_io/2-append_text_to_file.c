#include "main.h"
/**
 *main - program that copies content of a file
 *Return: Success (0),-1 otherwise
 */

#define BUFFER_SIZE 1024

void print_error_and_exit(int code, const char *message) {
    dprintf(2, message);
    exit(code);
}

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;
	
	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to\n");
	}
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (fd_to == -1)
    {
	    dprintf(2, "Error: Can't write to file %s\n", file_to);
        exit(99);
    }
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
	    if (write(fd_to, buffer, bytes_read) == -1)
	    {
		    dprintf(2, "Error: Can't write to file %s\n", file_to);
		    close(fd_from);
		    close(fd_to);
		    exit(99);
	    }
    }

    if (bytes_read == -1)
    {
	    dprintf(2, "Error: Can't read from file %s\n", file_from);
	    close(fd_from);
	    close(fd_to);
	    exit(98);
    }

    if (close(fd_from) == -1)
    {
	    dprintf(2, "Error: Can't close fd %d\n", fd_from);
	    exit(100);
    }
    if (close(fd_to) == -1)
    {
	    dprintf(2, "Error: Can't close fd %d\n", fd_to);
	    exit(100);
    }

    return (0);
}
