#include "main.h"
#include <studio.h>
/**
 */
void print_square(int size)
{
  int f;
  int c;


  for (f = 1; f <= size; f++)
    {
      for (c = 1; c <= size; c++)
	{
	  _putchar('#');
	}
      _putchar('\n');
    }
  if (size <= 0)
    {
      _putchar('\n');
    }
}
