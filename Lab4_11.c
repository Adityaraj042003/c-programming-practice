#include<stdio.h>
void main()
{
    int num,i,count=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        if (num % i==0)
        {
            count ++;
        }
    }
        if (count==2)
        {
            printf("%d is a prime num.\n",num);
        }
        else
        {
            printf("%d is not prime num",num);
        }
        
    
    
    
}