#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *print_last_digit - print the absolute value of n
 *@n: variable
 *Return: n
 */
void jack_bauer(void)
{
  int h;
  int m;
  for (h = 0; h <= 23; h++)
    {
      for (m = 0; m <= 59; m++)
	{
	  _putchar(h);
	  _putchar(':');
	  _putchar(m);
	}
    }
}
