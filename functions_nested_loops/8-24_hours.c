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
  int fh;
  for (h = 0; h <= 23; h++)
    {
      for (m = 0; m <= 59; m++)
	{
	  while(h >= 10)
	    {
	      fh = h;
	      fh /=10;
     	    }
	  _putchar(fh);
	  _putchar(h % 10);
	  _putchar(':');
	  
	}
    }
}
