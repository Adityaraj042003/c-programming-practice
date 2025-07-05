#include<stdio.h>
#include<math.h>
int main()
{
int a;
printf("Enter the num a:");
scanf("%d",&a);

int square = pow(a,2);
printf("square of %d is: %d\n",a, square);

int cube = pow(a,3);
printf("cube of %d is: %d",a,cube);

return 0;

}