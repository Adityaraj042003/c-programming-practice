#include<Stdio.h>
int main()
{
    int t1=0,t2=1,n,i;
    printf("Enter the no of terms to display:\n");
    Scanf("%d",&n);
    int next= t1+t2;
    printf("fibonacci series:%d%d",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf("%d  ",next);
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    return 0;

}
