//Name:Alan Anto
//roll no:6
//class:AD
#include <stdio.h>
#include<stdlib.h>
int queue[5], front = -1, rear = -1;
void enQueue()
{
  int value;
  if(((front==0)&&(rear==4))||(rear == (front-1)%4))
  {
    printf("\nQueue is Full\n");
  }
  else
  {
   if (front==-1)
    {
      front=0;rear=0;
      printf("Enter the element to store\n");
      scanf("%d",&queue[rear]);
    }
   else if((rear==4)&&(front!=0))
    {
      rear=0;
      printf("Enter the element to store\n");
      scanf("%d",&queue[rear]);
    }
   else
    {
    rear=rear+1;
    printf("Enter the element to store\n");
    scanf("%d",&queue[rear]);
    }
  }
}
void deQueue()
{
  int item;
  if(front == -1)
  {
    printf("\nQueue is Empty\n");
  }
  else
   {
    if(front==rear)
     {
      printf("\nDeleted : %d\n",queue[front]);
      front=-1;rear=-1;
     }
    else if(front==4)
     {
      printf("\nDeleted : %d\n",queue[front]);
      front=0;
     }
    else
     {
      printf("\nDeleted : %d\n",queue[front]);
      front=front+1;
     }
   }
}
void display()
{
  if (front==-1)
    printf("\nQueue is Empty\n");
  if(rear >= front)
    {
    int i;
    printf("\nQueue elements:\n");
    for (i=front;i<=rear;i++)
      printf("%d\n", queue[i]);
    }
  else
    {
        printf("\nQueue elements:\n");
        for (int i = 0; i <= rear; i++)
            printf("%d\n", queue[i]);
        for (int i = front; i < 5; i++)
            printf("%d\n", queue[i]);
    }

}
int main()
{
  int s=0;
  while(1)
   {
     printf("1:ENQUEUE\n2:DEQUEUE\n3:DISPLAY\n4:EXIT\n");
     scanf("%d",&s);
     switch(s)
      {
        case 1:enQueue();
               break;
        case 2:deQueue();
               break;
        case 3:display();
               break;
        case 4:exit(0);
        default:printf("invalid input\n");
      }
   }

   return 0;
}
