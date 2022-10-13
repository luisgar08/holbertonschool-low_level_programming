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
 for (n = 111; n >= 98; n--)
   {
     printf("%d, ", n);
   }
   }
}
