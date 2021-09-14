#include <stdio.h>
#include <string.h>
char reverse(char a[]);
int main()
{
    char a[100];
    printf("Enter the word :");
    gets(a);
    reverse(a);
    printf("\nThe reversed word is %s \n", a);
    return 0;
}
char reverse(char a[])
{
    int length, i;
    char temp;
    length = strlen(a) - 1;
    for (i = 0; i <= length / 2; i++)
    {
        temp = a[i];
        a[i] = a[length - i];
        a[length - i] = temp;
    }
}
