#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int l = n % 10;
if (n > 0)
{
printf("Last digit of n is %d and is greater than 5\n", l);
}
else if (n == 0)
{
printf("Last digit of n is %d and is 0\n", l);
}
else
{
printf("Last digit of n is %d and is less than 6 and not 0\n", l);
}
return (0);
}

