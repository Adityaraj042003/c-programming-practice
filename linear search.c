#include<stdio.h>
int main()
{
    int arr[8],search,i,pos;
    printf("Enter the array elements:");
    for(i=0;i<8;i++)
    scanf("%d",&arr[i]);
    printf("Enter the elements to search:\n");
    scanf("%d",&search);
    for(i=0;i<8;i++)
    {
        if(search==arr[i])
        {
            pos=i;
            break;
        }
    }
    if(pos==0)
    printf("Element not found");
    else
    printf("%d Found at index %d",search,pos);
    return 0;
}