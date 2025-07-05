#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    float areaoftriangle=0.5*a*b;
    float perimeteroftriangle=a+b+c;
    printf("Area of triangle=%f\n",areaoftriangle);
    printf("perimeter of triangle=%f\n",perimeteroftriangle);
}
