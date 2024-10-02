//program to calculate the fine for overdue library books
/*
Author:Fiona Wanjiku
Reg No:CT101/G/25189/24
Date:29-09-2024
Time:11:09 am
*/
//preprocessor to execute printf(),scanf()
#include <stdio.h>
#include<math.h>
int main () 
{
    int bookid,duedate,returndate,daysoverdue,finerate;
    float fineamount;
    printf("Input the bookid:");
    scanf("%d",&bookid);
    printf("The bookid is %d\n",bookid);

    printf("Input the duedate:");
    scanf("%d",&duedate);
    printf("The duedate is %d\n",duedate);

    printf("Input the returndate:");
    scanf("%d",&returndate);
    printf("The return date is %d\n",returndate);

    daysoverdue=returndate-duedate;
    printf("The daysoverdue=%d\n",daysoverdue);

    if(daysoverdue==0)
          {finerate=0;}

    else if(daysoverdue<=7)
           {finerate=20;}

    else if (daysoverdue<=14)
             {finerate=50;}

    else
        {finerate=100;}

    printf("The finalrate:%d\n",finerate);

    fineamount=finerate*daysoverdue;
    printf("The fineamount=%f\n",fineamount);

    return 0;
}
    
    