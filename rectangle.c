
#include <stdio.h>
int main()
{
    int i, j;
    float m,n;
    
    printf("Enter the length and width\n");
    scanf("%f%f", &m, &n);
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i==1 || i==m || j==1 || j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}