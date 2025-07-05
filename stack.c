#include<stdio.h>
struct node
{
int data;
struct node *link;
};
struct node *top=NULL;
void push(int);
void pop();
void peek();
void traverse();
int isEmpty();
int main()
{
int choice,item;
do
{
printf("-----Stack Operation Using Linked List-----\n");
printf("Press 1 for Push\n");
printf("Press 2 for Pop\n");
printf("Press 3 for Peek\n");
printf("Press 4 for Traverse\n");
printf("Press 5 for Exit\n");
printf("Enter your choice:\n");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Enter the data to push:\n");
scanf("%d", &item);
push(item);
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
traverse();
break;
case 5:
exit(0);
default:
printf("Invalid choice\n");
}
}
while(choice>=1 && choice<=5);
return 0;
}
int isEmpty()
{
if(top==NULL)
return 1;
else
return 0;
}
void push(int item)
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
top=temp;
else
{
temp->link=top;
top=temp;
}
}
}
void pop()
{
struct node *temp;
if(isEmpty())
printf("Stack is empty\n");
else
{
temp=top;
top=temp->link;
printf("Deleted element is %d\n" ,temp->data);
temp->link=NULL;
free(temp);
}
}
void traverse()
{
struct node *p;
if(isEmpty())
printf("Stack is empty\n");
else
{
printf("Stack contains\n");
p=top;
while(p!=NULL)
{
printf("%d\n", p->data);
p=p->link;
}
}
}
void peek()
{
if(isEmpty())
printf("Stack is empty\n");
else
printf("Top most element is: %d\n", top->data);
}