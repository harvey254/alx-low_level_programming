#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: big endian(0), little endian(1)
 */

int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *byte_ptr = (unsigned char *)&value;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
