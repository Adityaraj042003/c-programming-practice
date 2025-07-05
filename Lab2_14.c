#include<stdio.h>
int main()
{
  int num1,num2,num3;
  printf("Enter the value of num1:\n");
  scanf("%d",&num1);
  printf("Enter the value of num2:\n");
  scanf("%d",&num2);
  printf("The number are %d,%d,%d\n",num1,num2,num3);
  num3=num2;
  num2=num1;
  num1=num2;
  printf("After swapping the numbers are %d,%d",num1,num2);
  return 0;
}
