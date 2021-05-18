#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int i,j;
  int pattern = ("Enter type of pattern(1 or 2)\n");
  int n = ("Number of rows\n");
  switch(pattern)
  {
    case 1:
      for(i=n; i>=1; i--)
      {
        for(j=1; j<=i; j++)
        {
          printf("#");
        }
        printf("\n");
      }
      break;
    case 2:
      for(i =1; i<=n; i++)
      {
        for(j=i; j<=n; j++)
        {
          printf(" ");
        }
        for(j=1; j<=i; j++)
        {
          printf("#");
        }
        printf("\n");
      }
      break;
  } 
}          
             
      
