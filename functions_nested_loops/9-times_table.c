#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *jack_bauer - print the time to 00:00
 */
void times_table(void)
{
  int f;
  int c;
  int i;
  for (f = 0; f <= 9; f++)
    {
      for (c = 0; c <= 9; c++)
	{
	  int op = f * c;
	  if (op > 9)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar((op / 10) + '0');
	      _putchar((op % 10) + '0');
	    }
	  if (c == 0)
	    {
	      _putchar((op) + '0');
	    }
	  if (op <= 9)
	    {
	      _putchar(',');
	      _putchar (' ');
	      _putchar (' ');
	      _putchar ((op) + '0');
	    }
	}
      i++;
      _putchar('\n');
    }
}
