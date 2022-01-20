#include <stdio.h>
#include<stdlib.h>
int queue[10], front = -1, rear = -1;

void enQueue() {
    int value;
    printf("Enter the element to store\n");
    scanf("%d",&value);
  if (rear == 9)
    printf("\nQueue is Full\n");
  else {
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty\n");
  else {
    printf("\nDeleted : %d\n", queue[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!\n");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d\n", queue[i]);
  }
  printf("\n");
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
      }
   }

   return 0;
}
