/*Name:Alan Anto
  roll no: 6
  Class:AI&DS*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number to find the largest\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        printf("%d  is largest",a);
       }
    else if(b>=a&&b>=c)
    {
        printf("%d  is largest",b);
    }
    else
    {
        printf("%d  is largest",c);
    }
    return 0;
    }
