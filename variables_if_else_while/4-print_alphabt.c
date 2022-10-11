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
char ch2;
char ch3;
for (ch = 'a'; ch <= 'd'; ch++)
{
printf("%c", ch);
}
for (ch2 = 'f'; ch2 <= 'p'; ch2++)
{
printf("%c", ch2);
}
for (ch3 = 'r'; ch3 <= 'z'; ch3++)
{
printf("%c", ch3);
}
putchar('\n');
return (0);
}
