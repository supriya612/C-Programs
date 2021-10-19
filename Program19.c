//accept a number from user & return number of even digits

#include<stdio.h>
int EvenDigits(int iNo)
{
    int iDigit=0,iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        
     if((iDigit%2)==0)
    {
        iCnt++;
    }
    iNo=iNo/10;
    }
    return iCnt;
    }

int main()
{
    int iValue=0,iRet=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet=EvenDigits(iValue);
    printf("Number of even digits ar:%d",iRet);
    return 0;
}