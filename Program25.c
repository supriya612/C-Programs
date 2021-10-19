//Accept a number from user & return its largst digit

#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit=0,iMax=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit>iMax)
    {
         iMax=iDigit;
    }
    iNo=iNo/10;
    }
    return iMax;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=MaxDigit(iValue);
    printf("Max Digit is %d\n",iRet);
    return 0;
}