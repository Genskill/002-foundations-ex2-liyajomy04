#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int i,j;
  int pattern = get_int("Enter type of pattern(1 or 2) ");
  int n = get_int("Number of rows ");
  if(pattern == 1)
    {
      for(i=n; i>1; i--)
      {
        for(j=1; j<i; j++)
        {
          printf("#");
        }
        printf("\n");
      }
    }
   else if(pattern == 2)
     {
      for(i =n; i>0; i--)
      {
        for(j=0; j<n; j++)
       {
         if(j>=i-1)
        {
          printf("#");
        }
        else
        {
         printf(" ");
        }
        printf("\n");
       }
      }
     }
    else
      {
        printf("error");
      }
};        
             
      
