#include "main.h"
/**
 *_islower - shows 1 if the input is lowercase. Another case 0
 *@c: The character ASCII code
 * Return: Always 0 (Success)
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

