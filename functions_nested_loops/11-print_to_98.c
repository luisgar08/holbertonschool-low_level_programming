#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *add - print if the variable is lower
 *@x: variable
 *@y: variable
 *Description: print the result of a add
 *Return: operation
 */
int print_to_98(int n)
{
  if (n >= 0 && n >= 98)
    {
      if (n > 9)
	{
	  _putchar((n / 10) + '0');
	  _putchar((n % 10) + '0');
	  _putchar(',');
	  _putchar(' ');
	}
      else
	{
	  _putchar(n);
	  _putchar(',');
	  _putchar(' ');
	}
    }
return (0);
}
