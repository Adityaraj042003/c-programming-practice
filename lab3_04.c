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
    else if (num > 0)
    {
        printf(" %d is positive.\n",num);
    }
    else{
        printf("%d is negative.",num);
    }

    return 0;
       
 }