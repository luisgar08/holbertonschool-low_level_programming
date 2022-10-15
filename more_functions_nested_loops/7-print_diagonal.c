#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - function
 *@n: variable
 */
void print_diagonal(int n)
{
  int s;
  int c;
  if (n > 0)
    {
      for (s = 0; s <= n; s++)
	{
      for (c = 0; c < n; c++)
	{
	  if (n != 1)
	    {
	      _putchar(' ');
	    }
	}
      _putchar('/');
      _putchar('\n');
	}
    }
  else
    {
      _putchar('\n');
    }
  c = 0;
}
