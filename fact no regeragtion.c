/*NAME:ALAN ANTO
  ROL NO:6
  Class:AI$DS*/
#include <stdio.h>
long fact(int);
int main()
{
	int n,factorial;

  	printf("Enter the number:");
  	scanf("%d",&n);
    printf("Factorial of the %d is %d",n,fact(n));
}

long fact(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
