#include<stdio.h>
int main()
{
    int a,b ,sum,sub,mul,div,mod;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("%d+%d=%d\n",a,b,sum);
    printf("%d-%d=%d\n",a,b,sub);
    printf("%d*%d=%d\n",a,b,mul);
    printf("%d/%d=%d\n",a,b,div);
    printf("mod=%d",mod);
    return 0;
}
