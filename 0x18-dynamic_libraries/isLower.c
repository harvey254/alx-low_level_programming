#include "main.h"
/**
 *_islower - shows 1 if the input is lowercase. Another case 0
 *@c: The character ASCII code
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
