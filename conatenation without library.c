/*NAME:ALAN ANTO
  ROLL NO:6
  CLASS:AI&DS*/
#include<stdio.h>
int main()
{
 int i,j;
 char a[100],b[100],c[100];
 printf("Enter the first string:");
 gets(a);
 printf("Enter the second string:");
 gets(b);
 for(i=0;a[i]!='\0';i++)
 {
     c[i]=a[i];

 }c[i]=' ';
 for(j=0;b[j]!='\0';j++)
 {
     c[i+j+1]=b[j];

 }c[i+j+1]='\0';
 printf("The concatenated string:");
 puts(c);
 return 0;
}











