#include<stdio.h>
int Power(int iNo1,int iNo2)
{
    int iCnt=0;
    if((iNo1<0)&&(iNo2<0)
    {
        iNo1=-iNo1;
        iNo2=-iNo2;
    }
    if((iNo1==0)&&(iNo2)==0)
    {
        return 0;
    }
    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        iCnt=iCnt*iNo1;
            }
            return iCnt;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("enter two numbers\n");
    scanf("%d%d",&iValue1,iValue2);
    iRet=Power(iValue1,iValue2);
    printf("Power is %d",iRet);
    return 0;
}