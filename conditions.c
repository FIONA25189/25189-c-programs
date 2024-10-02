//program to implement a banks userfriendly prompts
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date:28-09-2024
Time:09:49 am
*/
//preprocessor to execute printf(),scanf()
# include <stdio.h>
int main ()
{
    int age;
    float income;
    printf("Input the age:");
    scanf("%d",&age);
    if(age>=21){
       printf("Your age is %d\n",age);
    }
    else{
   printf("Unfortunately we are unable to offer you a loan this time\n");   
    }
    printf("Input the income:");
    scanf("%f",&income);
    if(income>=21000){
       printf("Your salary is %f\n",income);
       printf("Congratulations you qualify for a loan\n");
    }
    else{
 printf("Unfortunately we are unable to offer you a loan this time:");
    }
    return 0;
}
