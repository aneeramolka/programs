#include<stdio.h>
void display(int arr[],int size)
{
for(int i=0;i < size;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
void insert(int arr[],int*size,int element,int position)
{
if (position<0||position>*size)
{
printf("invalid position for insertion \n");
return;
}
for (int i=*size;i > position;i--)
{
arr[i]=arr[i-1];
}
arr[position]=element;
(*size)++;
}
void deleteelement(int arr[],int*size,int position)
{
if(position<0||position>=*size)
{
printf("invalid position for deletion\n");
return;
}
for (int i=position;i<*size-1;i++)
{
arr[i]=arr[i+1];
}
(*size)--;
}
int search(int arr[],int size,int element)
{
for (int i=0;i<size;i++)
{
if(arr[i]==element)
{
return i;
}
}
return-1;
}
void selectionSort(int arr[],int size)
{
for(int i=0;i<size-1;i++)
{
int minindex=i;
for(int j=i+1;j<size;j++)
{
if(arr[j]<arr[minindex])
{
minindex=j;
}
}
if(minindex!=i)
{
int temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
}
}
int main()
{
int arr[100],size=0,choice,element,position;
do
{
printf("array operation menu :\n");
printf("1.insert\n");
printf("2.delete\n");
printf("3.search\n");
printf("4.sort\n");
printf("5.display\n");
printf("6.exit\n");
printf("enter your choice: ");
scanf("%d",&choice);
switch (choice)
{
case 1:
 printf("enter the element to insert:");
 scanf("%d",&element);
 printf("enter the position to insert:");
 scanf("%d",&position);
 insert(arr,&size,element,position);
 break;
case 2:
 printf("enter the position to delete:");
 scanf("%d",&position);
 deleteelement(arr,&size,position);
 break;
case 3:
 printf("enter the element to search:");
 scanf("%d",&element);
 position=search(arr,size,element);
 if(position !=-1)
 {
 printf("element found of position %d \n",position);
 }
 else
 {
 printf("element not found \n");
 }
 break;
case 4:
 selectionSort(arr,size);
 printf("array sorted successfully \n");
 break;
case 5:
 printf("array element: \t ");
 display(arr,size);
 break;
case 6:
 printf("exiting program .\n");
 break;
default:
 printf("invalid choice.\n");
 }
 }
 while(choice !=6);
 return 0;
 }

