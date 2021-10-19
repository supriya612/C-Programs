//accept a number from user & return the frequency of entered digit

#include<stdio.h>
int Frequency(int iNo1,int iNo2)
{
    int iDigit=0,iCnt=0;
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    if((iNo2<0)||(iNo2>9))
    {
        printf("Invalid digits\n");
        return 0;
    }
    
    while(iNo1>0)
    {
        iDigit=iNo1%10;
        iNo1=iNo1/10;
        if(iDigit==iNo2)
        {
            iCnt++;
        }

    }
    return iCnt;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    printf("Enter the digit that you want to search\n");
    scanf("%d",&iValue2);
    iRet=Frequency(iValue1,iValue2);
    printf("The frequency of digit is:%d",iRet);
    return 0;
}