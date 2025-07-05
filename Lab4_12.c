#include<stdio.h>
void main()
{
    int num,r,c,arm=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    c=num;
    while (num > 0)
    {
        r = num % 10;
        arm=(r*r*r)+arm;
        num = num/10;
    }  
        if (c==arm)
            printf("Armstrong num.\n");
        else
            printf("Not Armstrong num.");
            
}