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
	  putchar((h / 10) + '0');
	  putchar((h % 10) + '0');
	  putchar(':');
	  putchar((m / 10) + '0');
	  putchar((m % 10) + '0');
	}
    }
}
