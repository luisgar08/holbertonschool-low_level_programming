#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print the variable n
 *@n: variable
 *Description: print the variable n 
*/
void print_to_98(int n)
{
for (; n <= 98; n++ )
{
printf("%d, ", n);
}
 if (n == 98)
   {
     _putchar((n)+'0');
 for (n = 111; n >= 97; n--)
   {
     printf("%d, ", n);
   }
   }
}
