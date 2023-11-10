#include "main.h"
/**
 *main - program that copies content of a file
 *Return: Success (0),-1 otherwise
 */

#define BUFFER_SIZE 1024

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

