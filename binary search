//binary search
#include <stdio.h>
int q=1;
int main()
{
int i,n,First,Last,mid;
printf("enter the length of array:");
scanf("%d",&n);
int array[n];
printf("enter a sorted array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
First=0;
Last=n-1;
void search(int arr[10],int F,int L)
{
int key;
printf("enter the element to search:");
scanf("%d",&key);
while(L>=F)
{
mid=(F+L)/2;
if(array[mid]==key)
{
printf("the given element is found at index %d\n",mid);
break;
}
else if(array[mid]>key)
{
L=mid-1;
}
else
{
F=mid+1;
}
}
if(L<F)
{
printf("element not found\n");
}
printf("If you want to continue enter 1 or 0 to exit:");
scanf("%d",&q);
}
while(q==1)
{ search(array,First,Last);
}
}
