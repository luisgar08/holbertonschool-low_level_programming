#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - function main
 *Description: print number
 *Return: zero
 */
int main(void)
{
int n;
for (n = 0; n <= 8; n++)
{
printf("%d", n);
putchar(',');
putchar(' ');
}
putchar('9');
putchar('\n');
return (0);
}
