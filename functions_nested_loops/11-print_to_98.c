#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print the variable n
 *@n: variable
 *Description: print the variable n 
*/
void print_to_98(int n)
{
  for (; n <= 111; n++)
    {
      if (n == 98)
	{
	  printf("%d\n", n);
	}
      else
	{
	  printf("%d, ", n);
	}
    }
}
