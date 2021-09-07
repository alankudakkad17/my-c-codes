/*NAME:ALAN ANTO
  ROLL NO:6
  CLASS:AI&DS*/
#include<stdio.h>
#include<string.h>
int main()
{char a[100];
int i,flag=0,x;
printf("Enter the string:");
gets(a);
x=strlen(a);
for(i=0;i<x/2;i++)
{
    if(a[i]!=a[x-i-1])
     flag=1;
     break;

}
if(flag==1)
    printf("%s is not palindrome",a);
else
    printf("%s is  palindrome",a);
return 0;
}

