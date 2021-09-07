/*Name:Alan Anto
Roll No:06
class :AD */
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float r1,r2,img,d;
    printf("Enter the coefficient a,b,c of quadratic equation (Ax^2+Bx+c):");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=(-b+ sqrt(d))/(2*a);
        r2=(-b- sqrt(d))/(2*a);
        printf("root 1: %.2f \nroot 2: %.2f",r1,r2);
    }
    else if(d<0)
    {
        r1=r2= -b/(2*a);
        img = sqrt(-d)/(2*a);
        printf("Two distinct complex roots are:\nroot 1: %.2f + i%.2f \nroot 2: %.2f - i%.2f",r1,img,r2,img);
    }
    else
    {
        r1 = r2 = -b/(2*a);
        printf("Two equal and real roots exists: %.2f",r2);
    }
    return 0;
    }
