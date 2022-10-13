#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *jack_bauer - print the time to 00:00
 */
void jack_bauer(void)
{
  int f;
  int c;
  for (f = 0; f <= 9; f++)
    {
      for (c = 0; c <= 59; c++)
	{
	  int o;
	  o = f * c;
	  if (o > 9)
	    {
	      _putchar((o / 10) + ',');
	      _putchar((o % 10) + '0');
	    }
	}
    }
}
