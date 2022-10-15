#include <stdio.h>
#include "main.h"
/**
 */
void print_triangle(int size)
{
  int f;
  int c;
  int b = 1;
  if (size > 0)
    {
      for (f = 0; f < size; f++)
	{
	  for (c = size; c >= 1; c--)
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
	}
      _putchar('\n');
      b++;
    }
  else
    {
      _putchar('\n');
    }
}
