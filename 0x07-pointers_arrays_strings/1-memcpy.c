#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to string value
 * @src: pointer to string value
 * @n: bytes of memory area
 * Return: pointer to dest
 */
char *_memset(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }

        return (dest);
}

