//NAME:ALAN ANTO
//ROLL NO:6
//CLASS:AD
#include<stdio.h>
int stack[100],top=-1;
char postfix[100];
void push(int a)
{
  top=top+1;
  stack[top]=a;
}
char pop()
{
return(stack[top--]);
}
void evalution()
{   int i;
    char ch;
    int val;
    int A, B;
    for (i = 0; postfix[i] != '\0'; i++)
    {
        ch = postfix[i];

        switch (ch)
            {
            case '*':A=pop();
                     B=pop();
                     val = B * A; push(val);
                     break;
            case '/':A=pop();
                     B=pop();
                     val = B / A; push(val);
                     break;
            case '+':A=pop();
                     B=pop();
                     val = B + A; push(val);
                     break;
            case '-':A=pop();
                     B=pop();
                     val = B - A; push(val);
                     break;
            case '%':A=pop();
                     B=pop();
                     val= B % A;
                     push(val);

            default:printf("Enter the value of %c:",postfix[i]);
                    scanf("%d",&val);
                    push(val);
                    break;
            }
    }
    printf("Result of expression evaluation : %d \n", pop());
}
int main()
{

     int i;
     printf("Enter the Postfix Expression:");
     gets(postfix);
     evalution();
     return 0;
}
