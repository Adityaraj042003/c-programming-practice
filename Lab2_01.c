#include<stdio.h>
int main()
{
    int a,b,sum, sub, mul, div, mod;
    a=30;
    b=50;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("%d+%d=%d\n",a,b,sum);
    printf("%d-%d=%d\n",a,b,sub);
    printf("%d*%d=%d\n",a,b,mul);
    printf("%d/%d=%d\n",a,b,div);
    printf("mod=%d\n",mod);
    return 0;
}
    
