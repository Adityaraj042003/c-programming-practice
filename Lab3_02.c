#include<Stdio.h>
 int main()
 {
    int age;

    printf("Enter the age:");
    scanf("%d",&age);

    if (age>=18)

        printf("eligble for vote.\n",age);
    
    else
         printf("Not eligble.", age);


 }
 