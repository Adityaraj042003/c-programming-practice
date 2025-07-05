#include<stdio.h>
void main()
{
    int num,digits;

    printf("Enter the number:\n");
    scanf("%d",&num);

    printf("The digits are:\n");
    while (num!=0)
    {
        digits= num % 10;
        printf("%d\n",digits);

        num = num/10; // Remove the last digit from the number

    }
    


}