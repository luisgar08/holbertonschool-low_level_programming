#include "main.h"
/**
 */
void more_numbers(void)
{
  int c;
  int n;
  for (c = '0'; c <= 10; c++)
    {
      for (n = '0'; n <= 14; n++)
	{
	  if (n > '9')
	    {
	      _putchar((n / 10) + '0');
	      _putchar((n % 10) + '0');
	    }
	  else
	    {
	      _putchar(n);
	    }
	}
	     printf('\n');
    }
}
