#include<stdio.h>
void search(int array[],int n);
int main()
{
    int i,a[100],s,n;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("the entered array is :");
     for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    while(s!=2)
    {
        printf("what do you want to do\n 1.continue\n 2.stop\n");
        scanf("%d",&s);
        switch(s)
            {
            case 1:
                search(a,n);
                break;
            case 2:
                break;
            default:
                printf("invalid input\n");
            }
    }
}
void search(int array[],int n)
{
    int i,f=0,search;
    printf("enter the search element\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(array[i]==search)
        {
            printf("item found at %d location\n",(i+1));
            f=1;
            break;
        }

    }
    if(f!=1)
        printf("item not found\n");

}
