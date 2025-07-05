#include<stdio.h>
struct node
{
int data;
struct node *link;
};
struct node *start1=NULL;
struct node *start2=NULL;
void create_linked_list1();
void create_linked_list2();
void merge();
void traverse();
int length();
int main()
{
printf("---Linked list 1---\n");
create_linked_list1();
printf("---Linked list 2---\n");
create_linked_list2();
merge();
traverse();
printf("Length of merged linked list is %d\n", length());
return 0;
}
void create_linked_list1()
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
if(start1==NULL)
start1=temp;
else
{
temp->link=start1;
start1=temp;
}
printf("Press 1 to continue & 0 to stop\n");
scanf("%d", &choice);
}
}
while(choice!=0);
}
void create_linked_list2()
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
if(start2==NULL)
start2=temp;
else
{
temp->link=start2;
start2=temp;
}
printf("Press 1 to continue & 0 to stop\n");
scanf("%d", &choice);
}
}
while(choice!=0);
}
void merge()
{
struct node *p;
p=start1;
while(p->link!=NULL)
p=p->link;
p->link=start2;
}
void traverse()
{
struct node *p;
if(start1==NULL)
printf("Linked list is empty\n");
else
{
printf("Merged linked list contains:\n");
p=start1;
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
p=start1;
while(p!=NULL)
{
len++;
p=p->link;
}
return len;
}