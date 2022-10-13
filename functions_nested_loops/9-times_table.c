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
  int o;
  for (f = 0; f <= 9; f++)
    {
      for (c = 0; c <= 59; c++)
	{
	  o = f * c;
	  if (o > 9)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar((o / 10) + '0');
	      _putchar((o % 10) + '0');
	    }
	  if (c == 0)
	    {
	      _putchar((o) + '0');
	    }
	  if (o <= 9)
	    {
	      _putchar(',');
	      _putchar (' ');
	      _putchar (' ');
	      _putchar ((o) + '0');
	    }
	}
    }
  _putchar('\n');
}
