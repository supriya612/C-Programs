//accept a number from user & display numberLine till that number.

#include<stdio.h>

void NumberLine(int iNo)
{
    int iCnt=0;
    
        for(iCnt=-iNo;iCnt<=iNo;iCnt++)
        {
         printf("%d\t",iCnt);
        }

    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    NumberLine(iValue);
    return 0;
}