#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_abs - print the absolute value of n
 *@n: variable
 *Return: n
 */
int print_last_digit(int n)
{
  if (n < 0)
    {
      n = n * -1;
      n = n % 10;
      _putchar(n + '0');
    }
  else
    {
      n = n % 10;
      _putchar(n + '0');
    }
  return (n);
}
