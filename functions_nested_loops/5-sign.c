#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *main - print if the variable c is lower or upper
 *@n: variable
 *Description: print if the variable c is lower or upper
 *Return: 1 or 0
 */
void print_sign(int n)
{
  if (n < 0)
    {
      _putchar('-');
      return (-1);
    }
  if (n > 0)
    {
       _putchar('+');
      return (1);
    }
  if (n == 0)
    {
      _putchar('0');
      return (0);
    }
}
