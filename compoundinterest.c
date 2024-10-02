//program to calculate the compund interest
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date:23-09-2024
Time:16:49 pm
*/
//preprocessor to execute printf(),scanf()
#include <stdio.h>
#include<math.h>
int main ()
{
    //a= Totalamount,p=principalamount,r=interest rate,t=totalnumber of years,n=number of compounding a year
    //ci=compound interest
    float p,r,t,n,ci,a;
    printf("input the principle amount: ");
    scanf("%f",&p);
    printf("input the interest rate:");
    scanf("%f",&r);
    printf("nput the total number of years:");
    scanf("%f",&t);
    printf("input the number of compounding per year:");
    scanf("%f",&n);
    a=p*pow((1+r/(n*100)),(n*t));
    printf("The total amount=%f\n",a);
    ci=a-p;
    printf("The compound interest=%f",ci);
 return 0;
}