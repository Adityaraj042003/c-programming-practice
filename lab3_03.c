#include<Stdio.h>
 int main()
 {
    int num;

    printf("Enter the num:");
    scanf("%d" ,&num);

    // using else if ladder
    if (num == 0)
    {
        printf("The num is 0.\n",num);
    }
    else if (num % 2 == 0)
    {
        printf(" %d is even.\n",num);
    }
    else{
        printf("%d is odd.",num);
    }

    return 0;
       
 }