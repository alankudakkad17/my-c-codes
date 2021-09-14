/*NAME:ALAN ANTO
  ROL NO:6
  Class:AI$DS*/
#include <stdio.h>
#include<string.h>
void rev(char b[100],int y);
int main()
{
    char a[100],x,q;
    int z;
    printf("Enter the  string:");
    scanf("%s",&a);
    z=strlen(a);
    rev(a,z);
    printf("The reversed string is %s",a);
    return 0;

}
void rev(char b[],int y)
{
    int i ;
    char temp;
    for(i=0;i<y/2;i++)
       {
         temp=b[i];
         b[i]=b[y-i-1];
         b[y-i-1]=temp;
       }
}

