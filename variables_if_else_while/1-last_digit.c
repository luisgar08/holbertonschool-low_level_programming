#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - enter point
 *
 * Return: (0)
 */
int main(void)
{
int n;
int nume;
srand(time(0));
n = rand() - RAND_MAX / 2;
nume = n % 10;
if (nume == 0)
{
printf("Last digit of %i is% i and is 0\n", n, nume);
}
else
{
if (nume > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, nume);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nume);
}
}
return (0);
}
