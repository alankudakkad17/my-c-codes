//linear search
#include <stdio.h>
int q=1;
void search(int arr[10],int m)
{
int a,c,key=0,p;
 printf("enter the number to find:");
 scanf("%d",&a);
 for(c=0;c<m;c++)
 {
 if(arr[c]==a)
  {key=1;
  p=c; 
  }
 }
if(key==1)
 printf("%d found at loc:%d\n",a,p);
else
 printf("the element is not found\n");
printf("If you want to continue the program enter 1 and to exit enter 0:");
scanf("%d",&q);
}
int main()
 {
 int array[10],n,c;
 printf("enter num of elements in array:");
 scanf("%d",&n);
 for(c=0;c<n;c++)
  {
  printf("enter the element %d:",c+1);
  scanf("%d",&array[c]);
  }
while(q==1)
{
search(array,n);
}
}
