#include <stdio.h>
#include <cs50.h>

int main(void){
  int pattern = get_int("pattern\n ");
  int n = get_int("rows\n  ");
  if(pattern == 1)
    {
      for(int i=n; i>=1; i--)
      {
        for(int j=1; j<=i; j++)
        {
          printf("#");
        }
        printf("\n");
      }
    }
   else if(pattern == 2)
     {
      for(int i=1; i<=0; i++)
      {
        for(int j=i; j<=n; j++)
       {
         printf(" ");
       }
        for(int j=1; j<=i; j++)
       {
         printf("#");
       }
         printf("\n");
      }
     }
    else
     {
       printf("error");
     }
};        
             
      
