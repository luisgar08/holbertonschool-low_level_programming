#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - function main
 *Description: print alphabet in lower
 *Return: zero
 */
int main(void)
{
char ch;
 for (ch = 'a' ; ch <='z' ; ch++)
   {
     printf("%c", ch);
   }
 for (ch='A'; ch <= 'z'; ch++)
   {
     printf("%c\n", ch);
   }
return (0);
}
