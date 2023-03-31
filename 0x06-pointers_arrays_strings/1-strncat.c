#include "main.h"
#include <string.h>

/**
 * *_strcat - See description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcat(char *dest, char *src)
{
        char *p = dest;

        while (*dest != '\0')
        {
                dest++;
        }

        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
		n--;
        }

        *dest = '\0';

        return (p);
}

