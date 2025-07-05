#include<stdio.h>
#include<string.h>
#define max 20
char stack[max];
int top=-1;
int isEmpty();
int isFull();
void push(char);
char pop();
int isOperator(char);
int isOperand(char);
int checkPrecedence(char);
int main()
{
char infix[max], infix2[max], prefix[max];
char ch, k;
int len, i=0, j=0;
printf("Enter the infix expression:\n");
scanf("%s", infix);
strcpy(infix2, infix);
push(')');
len=strlen(infix);
strrev(infix);
infix[len]='(';
infix[len+1]='\0';
while(!isEmpty())
{
ch=infix[i];
if(ch==')')
push(ch);
else if(isOperand(ch))
prefix[j++]=ch;
else if(isOperator(ch))
{
while(checkPrecedence(ch)<checkPrecedence(stack[top]))
prefix[j++]=pop();
push(ch);
}
else if(ch=='(')
{
while(stack[top]!=')')
prefix[j++]=pop();
k=pop();
}
i++;
}
prefix[j]='\0';
strrev(prefix);
printf("Prefix of %s is %s", infix2, prefix);
return 0;
}
int isEmpty()
{
if(top==-1)
return 1;
else
return 0;
}
int isFull()
{
if(top==max-1)
return 1;
else
return 0;
}
void push(char item)
{
if(isFull())
printf("Stack is overflow\n");
else
{
top++;
stack[top]=item;
}
}
char pop()
{
char item;
if(isEmpty())
printf("Stack is underflow\n");
else
{
item=stack[top];
top--;
}
return item;
}
int isOperator(char ch)
{
if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='%')
return 1;
else
return 0;
}
int isOperand(char ch)
{
if(ch>=65 && ch<=90 || ch>=97 && ch<=122 || ch>=48 && ch<=57)
return 1;
else
return 0;
}
int checkPrecedence(char ch)
{
if(ch=='^')
return 3;
else if(ch=='*' || ch=='/' || ch=='%')
return 2;
else if(ch=='+' || ch=='-')
return 1;
else
return 0;
}