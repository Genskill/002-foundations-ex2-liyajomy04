#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int a = get_int("side 1 \n");
  int b = get_int("side 2 \n");
  int c = get_int("side 3 \n");
  int(sum) = (int)(a*a)+(b*b);
   if((c*c) >= sum)
   {
    printf("Yes\n");
   }
   else
   {
    printf("No\n");
   }
}
 
