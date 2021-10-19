//accept a number from user & return smallest digit

#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit=0,iMin=9;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        iNo=iNo/10;
    }
    return iMin;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=MinDigit(iValue);
    printf("Smallest digit is :%d",iRet);
    return 0;
}