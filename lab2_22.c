#include<stdio.h>
void main()
{
    float marksofstudent1;
    printf("Enter the marks of student1:");
    scanf("%f", &marksofstudent1);

    float marksofstudent2;
    printf("Enter the marks of student2:");
    scanf("%f", &marksofstudent2);

    float marksofstudent3;
    printf("Enter the marks of student3:");
    scanf("%f", &marksofstudent3);

    float marksofstudent4;
    printf("Enter the marks of student4:");
    scanf("%f", &marksofstudent4);

    float marksofstudent5;
    printf("Enter the marks of student5:");
    scanf("%f", &marksofstudent5);

    float marksofstudent6;
    printf("Enter the marks of student6:");
    scanf("%f", &marksofstudent6);

    float sumofallmarks=marksofstudent1+marksofstudent2+marksofstudent3+marksofstudent4+marksofstudent5+marksofstudent6;
    float averagemarks=(sumofallmarks)/6;
    printf("sum of allmarks=%f\n",sumofallmarks);
    printf("averagemarks=%f",averagemarks);

}
