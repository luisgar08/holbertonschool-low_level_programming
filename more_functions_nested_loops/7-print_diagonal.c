#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - function
 *@n: variable
 */
void print_diagonal(int n)
{
  int c;
  if (n > 0)
    {
      for (c = 0; c < n; c++)
	{
	  _putchar('/');
	}
      _putchar('\n');
    }
  else
    {
      _putchar('\n');
    }
  c = 0;
}
