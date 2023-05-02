#include <stdio.h>
/**
  * _main - prints before main function is executed
  *
  * Return: no value
  */
void _main(void) __attribute__ ((__constructor__));
void _main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
