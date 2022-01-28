/*NAME:ALAN ANTO
  ROLL NO: 6
  CLASS:AI&DS*/
#include<stdio.h>
void swap(int*p1,int*p2);
int main()

{
    int *p1,*p2,a,b;
    p1=&a;
    p2=&b;
    printf("Enter the numbers a,b:");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",*p1+*p2);
    swap(p1,p2);
    printf("a=%d \nb=%d",a,b);
    return 0;
}
void swap(int*p1,int *p2)

{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
