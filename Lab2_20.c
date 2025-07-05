#include<stdio.h>
void main()
{
int a;
printf("Enter the value of a:");
scanf("%d",&a);
float b;
printf("Enter the value of b:");
scanf("%f",&b);
char c;
printf("Enter the value of c:");
scanf("%c",&c);
double d;
printf("Enter the value of d:");
scanf("%lf",&d);
printf("size of int=%dbyte\n",sizeof(a));
printf("size of float=%dbyte\n",sizeof(b));
printf("sizeof char=%dbyte\n",sizeof(c));
printf("size of double=%dbyte\n",sizeof(d));

}