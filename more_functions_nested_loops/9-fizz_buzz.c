#include <stdio.h>
#include "main.h"
/**
 *main - main function for print FizzBuzz
 *Description: print FizzBuzz
 *Return: zero
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
if (n != 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
