/*Name :Jomal p joy
  Roll no:43
  Class:AI&DS*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the largest number \n",num1);
        }
        else
        {
            printf("&d is the largest number \n",num3);
        }
    }
    else if (num2 > num3)
        printf("%d is the largest number \n",num2);
    else
        printf("num3 is the largest number\n",num3);
    return 0;
}
