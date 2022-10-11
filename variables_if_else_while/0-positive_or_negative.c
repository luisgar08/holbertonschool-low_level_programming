#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if ((n == 0))
    then
      print "is zero";
    fi
  if ((n < 0))
    then
      print "is negative";
    fi
  if ((n > 0))
    then 
      print "is positive";
    fi
  return (0);
}
