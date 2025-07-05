#include <stdio.h>
int add();
{
    int x,y;
    printf("Enter two no:\n");
    scanf("%d %d" , &x,&y);
    return x+y;
    
       int main()
    {
        printf("Add is %d",add());
        return 0;
    }
}
