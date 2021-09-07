#include<stdio.h>
#include<string.h>
int main()
{char a[100],b[100];
int i,j,x;
gets(a);
gets(b);
x=strlen(a);
for(i=0;i<x;i++)
{
    if(a[i]==b[i])
        j=1;
    else
        j=0;

}

if(j==1)
    printf('n');
else
    printf('y');

return 0;





}
