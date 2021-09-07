/* NAME:basil p babu
   ROLL NO:18
   CLASS:AI&DS*/
#include<stdio.h>
int main()
{
 int A[100],x,n,sum=0,avg=0;
 printf("Enter the size of array=");
 scanf("%d",&n);
 printf("Enter the the elements of the array\n");
 for(x=0;x<n;x++)
  { scanf("%d",&A[x]);
  }
 for(x=0;x<n;x++)
 { sum=sum+A[x];
 }
 avg = sum/n;
 printf("sum = %d\n",sum);
 printf("Average= %d",avg);
 return 0;
}
