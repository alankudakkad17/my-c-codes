
#include <stdio.h>
#include<string.h>
char  rev(char a[100],int y);
int main()
{
    char a[100],temp;
    int z,i;
    printf("enter the  string:");
    scanf("%s",&a);
    z=strlen(a);
    for(i=0;i<z/2;i++)
       {
         temp=a[i];
         a[i]=a[z-i-1];
         a[z-i-1]=temp;

       }
    printf("the reversed string is %s",a);
    return 0;
  }
