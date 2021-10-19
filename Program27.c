//accept two numberd from user & return the frequecy of given number.

#include<stdio.h>
int FrequencyDigit(int iNo1,int iNo2)
{
    int iDigit=0,iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo2>9)
    {
        return 0;
    }
    while(No>0)
    {
        iDigit=iNo%10;
        if(iDigit==iNo2)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    printf("Enter the digit that you want to count\n");
    scanf("%d",&iValue);
    iRet=FrequencyDigit(iValue1,iValue2);
    printf("Frequency of digit is :%d",iRet);
    return 0;
}