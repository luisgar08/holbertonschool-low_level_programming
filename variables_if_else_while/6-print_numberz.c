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
  int n = '0';
  while (n <= '9')
    {
      putchar(n);
      n++
    }
  putchar('\n');
  return (0);
}
