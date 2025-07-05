#include<stdio.h>
void main()
{
    int num1,num2,num3;
   printf("Enter the num1:");
   scanf("%d",&num1);
   printf("Enter the num2:");
   scanf("%d",&num2);
   printf("Enter the num3:");
   scanf("%d",&num3);
    num2=num1=num2;
    num1=num2-num1;
    num2=num2-num1;
    printf("After swapping the numbers are %d,%d",num1,num2);

}
