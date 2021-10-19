//Accept number from user & return its factorial
#include<stdio.h>

int Fact(int iNo)
{
     int iCnt=0,iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
     
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        iMult=iMult*iCnt;
        printf("%d\n",iMult);
        
    }
    return iMult;
}
int main()
{
    int iValue1=0,iRet=0;
    printf("enter number\n");
    scanf("%d",&iValue1);
    iRet=Fact(iValue1);
    printf("Factorial is %d\n",iRet);
    return 0;
}