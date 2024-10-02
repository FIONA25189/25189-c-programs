//variables and datatypes
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date:23-09-2024
Time:16:49 pm
*/
//preprocessor to execute printf(),scanf()
#include <stdio.h>
int main ()
{
    //declaration and initialization
    char a;
    char name[]={};
    int age;
    float salary;
    double budget;

    //prompting users to enter values of each variable
    printf("Input a character:");
    scanf("%c",&a);
    printf("The character is %c\n",name);

    printf("Input the character name:");
    scanf("%S",&name);
    printf("Your name is %c\n",name);

    printf("Input your age:");
    scanf("%d",&age);
    printf("Your age is %d\n",age);

    printf("Input the salary:");
    scanf("%f",&salary);
    printf("Your salary is %f\n",salary);

    printf("Input the budget:");
    scanf("%lf",&budget);
    printf("Your salary is %lf\n",budget);

    return 0;
}
