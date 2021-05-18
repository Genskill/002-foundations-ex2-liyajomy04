#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int i,j;
  int pattern = get_int("Enter type of pattern(1 or 2)\n");
  int n = get_int("Number of rows\n");
  if(pattern == 1)
    {
      for(i=n; i>=1; i--)
      {
        for(j=1; j<=i; j++)
        {
          printf("#");
        }
        printf("\n");
      }
    }
   else if(pattern == 2)
     {
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
     }
    else
      {
        printf"error\n");
      }
}          
             
      
