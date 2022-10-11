#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int nume;
srand(time(0));
n = rand() - RAND_MAX / 2;
nume = n % 10;
if (nume == 0)
{
printf("Last digit of %i is% i and is 0\n", n , nume);
}
else
{
if (nume > 5)
{
printf("Last digit of %i is% i and is greater than 5\n", n, nume);
}else
{
print("Last digit of %i is% i and is less than 5\n", n, nume);   
}
}
return (0);
}
