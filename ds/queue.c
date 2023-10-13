#include<stdio.h>
#include<stdlib.h>
void insert();
void dequeue();
void display();
int front=-1,rear=-1,maxsize;
int queue[100];
int main()
{
int choice;
printf("\n enter the size of QUEUE:");
scanf("%d",&maxsize);
printf("\n OUEUE OPERATIONS USING ARRAY");
printf("\n1.insert an elemnt\n2.delete an element\n3.display the queue\n4.exit");
while(choice!=4)
{
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
 case1:
 insert();        
 break;
 case2:
 dequeue();
 break;
 case3:
 display();
 break;
 case4:
 exit(0);
 break;
 default:
 printf("\n enter valid choice??\n");
}
}
return 0;
}
void insert()
{
int item;
printf("\n enter the element\n");
scanf("\n%d",&item);
if(rear==maxsize-1)
{
printf("\n OVERFLOW\n");
return;
}
if(front==-1&&rear==-1)
{
front=0;
rear=0;
}
else
{
rear=rear+1;
}
queue[rear]=item;
printf("\n value inserted");
}
void dequeue()
{
int item;
if(front==-1||front>rear)
{
printf("\n UNDERFLOW\n");
return;
}
else
{
item=queue[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
printf("\n value deleted");
}
}
void display()
{
int i;
if(rear==-1)
{
printf("\n empty queue\n");
}
else
{
printf("\n elements in the queue are\n");
for(i=front;i<=rear;i++)
{
printf("\n%d",queue[i]);
}
}
}

