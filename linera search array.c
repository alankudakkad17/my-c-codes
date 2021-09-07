/* NAME:basil p babu
   ROLL NO:18
   CLASS:AI&DS*/
#include<stdio.h>
int main()
{
 int A[100],x,n,z;
 printf("Enter the size of array= ");
 scanf("%d",&n);
 printf("Enter the number to be searched=");
 scanf("%d",&z);
 printf("Enter the the elements of the array\n");
 for(x=0;x<n;x++)
  { scanf("%d",&A[x]);
  }
 for(x=0;x<n;x++)
 { if(A[x]==z)
   break;
 }
 if(A[x]==z)
 printf("%d is founded in the index %d",z,x);
 else
    printf("element not found");
 return 0;
}
