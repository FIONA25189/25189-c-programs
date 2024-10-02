//program to calculate the simple interest 
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date:23-09-2024
Time:16:49 pm
*/
//preprocessor to execute printf(),scanf()
# include <stdio.h>
int main ()
{
    //p=principal Amount,r=interest rate,t= time in duration(in years) si=simple interest
    float p,r,si,t;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the interest rate:");
    scanf("%f",&r);
    printf("Enter the tme in duration:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("The simple interest=%f",si);
    return 0;
}