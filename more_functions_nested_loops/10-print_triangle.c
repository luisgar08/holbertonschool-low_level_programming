#include <stdio.h>
#include "main.h"
/**
 */
void print_triangle(int size)
{
  int f;
  int c;
  int b;
  if (size > 0)
    {
      for (f = 0; f < size; f++)
	{
	  if (b >= c)
	    {
	      _putchar('#');
	    }
	  else
	    {
	      _putchar(' ');
	    }
	}
      b++;
      _putchar('\n');
    }
  else
    {
      _putchar('\n');
    }
}
