/*NAME:ALAN ANTO
  CLASS:AI&DS
  ROLL NO:6*/
#include<stdio.h>
struct employee
{  char name[30];
   int empid;
   int salary;
} e[40];
int main()
{   int i,n;
    printf("Enter the no of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   printf("\nEnter the name of employee:");
        scanf("%s",e[i].name);
        printf("Enter the employee id:");
        scanf("%d",&e[i].empid);
        printf("Enter the salary:");
        scanf("%d",&e[i].salary);
    }
    for(i=0;i<n;i++)
    {   printf("\nEmployee name:%s \n",e[i].name);
        printf("Employee id:%d \n",e[i].empid);
        printf("Salary:%d \n",e[i].salary);
    }
    return 0;
}
