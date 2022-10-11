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
  for (n = 0; n <= 9; n++)
    {
      putn("%d", n);
    }
  putchar('\n');
  return (0);
}
