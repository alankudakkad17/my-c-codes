/*NAME:ALAN ANTO
  ROL NO:6
  Class:AI$DS*/
#include<stdio.h>
long fact(int);
int main()
{
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("The factorial of %d is %d",n,fact(n));
   return 0;
}
long fact(int n)
{
    if(n==1)
    {
       return 1;
    }
    else
    {
      return n*fact(n-1);
    }
}
