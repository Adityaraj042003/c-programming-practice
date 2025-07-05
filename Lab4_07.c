#include<stdio.h>
void main()
{
    int num,digits,sum=0;

    printf("Enter the number:\n");
    scanf("%d",&num);

    while (num!=0)
    {
        digits = num % 10;
        sum = sum + digits;
        num = num / 10; // Remove the last digit from the number
    }
    printf("The sum of digit will be:%d",sum);

}