// check number is palindrom or not
    // condition of palindrom are: compare it with the original number.Ex-252 252

    #include<stdio.h>
void main()
{
    int num,digits,reverse = 0,temp;

    printf("Enter the number:\n");
    scanf("%d",&num);
    temp = num;
    while (num!=0)
    {
        digits= num % 10;
        reverse = reverse * 10 + digits;
        num = num / 10;   //Remove the last digit from the number
    }
    if (temp == reverse)
    {
        printf("%d num is palindrome\n",temp);
    }else{
        printf("%d num is not palindrome\n",temp);
    }
    
}

