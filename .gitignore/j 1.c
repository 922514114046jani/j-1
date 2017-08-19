#include<stdio.h>
int main()
{
 int num;
 scanf("%d",&num);
 prntf(" enter a number :");
 if (num > 0)
 {
  printf( "number is positive");
  }
  else if(num < 0)
  {
   printf( "number is negative");
   }
   else
   {
   printf ( "number is zero");
   }
   return 0;
 }
