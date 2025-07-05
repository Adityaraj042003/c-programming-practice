#include <stdio.h>
int main()
{
    int rad, x, y;
    printf("Enter a Radius of circle = ");
    scanf("%d", &rad);
    for (y = rad; y >= -rad; y--)
    {
        for (x = -rad; x <= rad; x++)
        {
            if (x * x + y * y <= rad * rad)
                printf("**");
            else
                printf("  ");
        }
        printf("\n");
    }
}