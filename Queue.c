#include<stdio.h>
struct node
{
int data;
struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert(int);
void delete();
void traverse();
int isEmpty();
int main()
{
int choice,item;
do
{
printf("-----Queue Operation Using Linked List-----\n");
printf("Press 1 to Insert\n");
printf("Press 2 to Delete\n");
printf("Press 3 to Traverse\n");
printf("Press 4 for Exit\n");
printf("Enter your choice:\n");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Enter the data to insert:\n");
scanf("%d", &item);
insert(item);
break;
case 2:
delete();
break;
case 3:
traverse();
break;
case 4:
exit(0);
default:
printf("Invalid choice\n");
}
}
while(choice>=1 && choice<=4);
return 0;
}
int isEmpty()
{
if(rear==NULL)
return 1;
else
return 0;
}
void insert(int item)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
printf("Dynamic memory allocation is failed\n");
else
{
temp->data=item;
temp->link=NULL;
if(isEmpty())
front=rear=temp;
else
{
rear->link=temp;
rear=rear->link;
}
}
}
void delete()
{
struct node *temp;
if(isEmpty())
printf("Queue is empty\n");
else
{
temp=front;
if(front==rear)
front=rear=NULL;
else
front=temp->link;
printf("Deleted element is %d\n" ,temp->data);
temp->link=NULL;
free(temp);
}
}
void traverse()
{
struct node *p;
if(isEmpty())
printf("Queue is empty\n");
else
{
printf("Queue contains\n");
p=front;
while(p!=NULL)
{
printf("%d\n", p->data);
p=p->link;
}
}
}