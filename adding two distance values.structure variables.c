/*NAME;ALAN ANTO
  CLASS:AI&DS
  ROLL NO:6*/
#include<stdio.h>
struct points
{
    int x,y;
}p,q,r;
int main()
{
    printf("Enter the x coordinate and y coordinate of first position:");
    scanf("%d %d",&p.x,&p.y);
    printf("Enter the x coordinate and y coordinate of second position:");
    scanf("%d %d",&q.x,&q.y);
    r.x=p.x+q.x;
    r.y=p.y+q.y;
    printf("The sum of coordinates are:\nx=%d\ny=%d",r.x,r.y);
    return 0;
}
