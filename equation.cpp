/*Name:basil p babu
  roll no: 18
  Class:AI&DS*/
#include <stdio.h>
int main()
{
    float a,b,c,d,e,f,g,solution;
    printf("Enter the values for a,b,c,d,e,f and g\n");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    solution=((a-b/c*d+e)*(f+g));
    printf("The solution is %f",solution);
    return 0;
    }
