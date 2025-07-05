#include<stdio.h>
struct node
{
int data;
struct node *link;
};
struct node *start=NULL;
void create();
void traverse();
int length();
int main()
{
create();
traverse();
printf("Length is %d\n", length());
return 0;
}
void create()
{
struct node *temp;
int choice;
do
{
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
printf("Dynamic memory allocation failed\n");
else
{
printf("Enter data:\n");
scanf("%d", &temp->data);
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
temp->link=start;
start=temp;
}
printf("Press 1 to continue & 0 to stop\n");
scanf("%d", &choice);
}
}
while(choice!=0);
}
void traverse()
{
struct node *p;
if(start==NULL)
printf("Linked list is empty\n");
else
{
printf("Linked list contains:\n");
p=start;
while(p!=NULL)
{
printf("%d ",p->data);
p=p->link;
}
printf("\n");
}
}
int length()
{
struct node *p;
int len=0;
p=start;
while(p!=NULL)
{
len++;
p=p->link;
}
return len;
}