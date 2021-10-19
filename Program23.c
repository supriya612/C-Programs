//accept a number from user & display its in reverse order

#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit=0,iRev=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}
int main()
{
    int iValue1=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet=ReverseNumber(iValue1);
    printf("Reverse number is :%d\n",iRet);
    return 0;
}