#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*link;
};
int main(){
    int Null;
    struct node*head = NULL;
    head = (struct node*) malloc(size of (struct node));
    head->data = 45;
    head->link=Null;
    printf("%d",head->data);
    return 0;
}