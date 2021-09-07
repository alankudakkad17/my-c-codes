/*Name :Alan anto
  Roll no:6
  Class:AI&DS*/
#include<stdio.h>
#include<math.h>
int main()
{

 int n,r,a,sum=0,temp,count = 0,x;
 printf("Enter the number");
 scanf("%d",&n);
 temp=n;

 while (temp != 0)
  {
    temp= temp / 10;
    ++count;
  }
  temp=n;

 while(temp>0)
 {
  r=temp%10;
  sum=sum+pow(r,count);
  temp=temp/10;
 }
 if(n==sum)
 printf("%d is a armstrong  number ",n);
 else
 printf("%d is not a armstrong number",n);
 return 0;

}

