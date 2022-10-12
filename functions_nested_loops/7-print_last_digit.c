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
  int x = 0;
  x = n % 10;
  if (x < 0)
    {
      x = x * -1;
      _putchar(x + '0');
    }
  else
    {
      n = n % 10;
      _putchar(x + '0');
    }
  return (l);
}
