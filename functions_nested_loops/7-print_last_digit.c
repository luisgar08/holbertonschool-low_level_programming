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
  if (l < 0)
    {
      l = l * -1;
      _putchar(l + '0');
    }
  else
    {
      n = n % 10;
      _putchar(l + '0');
    }
  return (l);
}
