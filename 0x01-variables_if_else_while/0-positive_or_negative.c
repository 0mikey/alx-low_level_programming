#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
      int x;

      srand(time(0));
      x = rand()  - RAND_MAX / 2;

      printf("%d \n", x);

      /* Our own code will go here */
      if (x > 0)
      {
           printf(" is positive \n");
      }
      else if (x < 0)
      {
           printf(" is negative \n");
      }
      else
      {
           printf(" is zero \n");
       }
      return 0;
}

