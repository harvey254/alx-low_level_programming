#include "main.h"
/**
 * print_error_and_exit
 * @code: integer value
 * @message: string value to be copied
 * Return: no value
 */
void print_error_and_exit(int code, const char *message)
{
	dprintf(2, message);
	exit(code);
}

