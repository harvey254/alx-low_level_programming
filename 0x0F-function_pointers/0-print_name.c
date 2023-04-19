#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string value
 * @f: pointer to function
 * 
 * Return: no value
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(f) && !(name))
		f(name);
}
