#include<stdio.h>
struct node
{
int data;
struct node *link;
};
struct node *start=NULL;
void create();
int length();
void insert_at_begin();
void insert_at_end();
void insert_at_any();
void delete_from_begin();
void delete_from_end();
void delete_from_any();
void traverse();
void search();
void reverse();
int main()
{
create();
traverse();
printf("Length is %d\n", length());
int choice, item;
do
{
printf("-----Single Linked List Operation-----\n");
printf("Press 1 to insert at begin\n");
printf("Press 2 to insert at end\n");
printf("Press 3 to insert at any position\n");
printf("Press 4 to delete from begin\n");
printf("Press 5 to delete from end\n");
printf("Press 6 to delete from any position\n");
printf("Press 7 to traverse\n");
printf("Press 8 to search an element\n");
printf("Press 9 to reverse the linked list\n");
printf("Press 10 to exit\n");
printf("Enter ur choice:\n");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert_at_begin();
break;
case 2:
insert_at_end();
break;
case 3:
insert_at_any();
break;
case 4:
delete_from_begin();
break;
case 5:
delete_from_end();
break;
case 6:
delete_from_any();
break;
case 7:
traverse();
break;
case 8:
search();
break;
case 9:
reverse();
break;
case 10:
exit(0);
default:
printf("Invalid choice\n");
}
}
while(choice>=1 && choice<=10);
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
void insert_at_begin()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
printf("Dynamic memory allocation is failed\n");
else
{
printf("Enter data\n");
scanf("%d", &temp->data);
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
temp->link=start;
start=temp;
}
}
}
void insert_at_end()
{
struct node *temp, *p;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
printf("Dynamic memory allocation is failed\n");
else
{
printf("Enter data\n");
scanf("%d", &temp->data);
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
p=start;
while(p->link!=NULL)
p=p->link;
p->link=temp;
}
}
}
void insert_at_any()
{
struct node *temp, *p;
int len, pos, i;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
printf("Dynamic memory allocation is failed\n");
else
{
printf("Enter data\n");
scanf("%d", &temp->data);
temp->link=NULL;
if(start==NULL)
start=temp;
else
{
len=length();
printf("Enter the position you want to insert\n");
scanf("%d", &pos);
if(pos>len+1)
printf("Invalid position\n");
else
{
if(pos==1)
{
temp->link=start;
start=temp;
}
else
{
i=1;
p=start;
while(i<pos-1)
{
p=p->link;
i++;
}
temp->link=p->link;
p->link=temp;
}
}
}
}
}
void delete_from_begin()
{
struct node *temp;
if(start==NULL)
printf("Single linked list is empty\n");
else
{
temp=start;
start=temp->link;
printf("Deleted item: %d\n", temp->data);
temp->link=NULL;
free(temp);
}
}
void delete_from_end()
{
struct node *temp, *prev, *p;
if(start==NULL)
printf("Single linked list is empty\n");
else
{
p=start;
while(p->link!=NULL)
{
prev=p;
p=p->link;
}
temp=prev->link;
prev->link=NULL;
printf("Deleted item: %d\n", temp->data);
free(temp);
}
}
void delete_from_any()
{
struct node *temp, *p;
int len, pos, i;
if(start==NULL)
printf("Single linked list is empty\n");
else
{
len=length();
printf("Enter the position you want to delete\n");
scanf("%d", &pos);
if(pos>len)
printf("Invalid position\n");
else
{
if(pos==1)
{
temp=start;
start=temp->link;
printf("Deleted item: %d\n", temp->data);
temp->link=NULL;
free(temp);
}
else
{
i=1;
p=start;
while(i<pos-1)
{
p=p->link;
i++;
}
temp=p->link;
p->link=temp->link;
printf("Deleted item: %d\n", temp->data);
temp->link=NULL;
free(temp);
}
}
}
}
void search()
{
int pos=1, c, s;
struct node *p;
printf("Enter the element to search:\n");
scanf("%d", &s);
c=length();
p=start;
while(p!=NULL)
{
if(p->data==s)
{
printf("%d is found at %d position", s, pos);
break;
}
else
{
p=p->link;
pos++;
}
}
if(pos>c)
printf("%d is not found", s);
}
void reverse()
{
struct node *current, *prev, *ptr;
if(start==NULL)
printf("Single linked list is empty\n");
else
{
current=start;
prev=current->link;
current->link=NULL;
while(prev->link!=NULL)
{
ptr=prev->link;
prev->link=current;
current=prev;
prev=ptr;
}
prev->link=current;
start=prev;
}
}