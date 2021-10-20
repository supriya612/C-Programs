//Accept a number from user & return the difference between largest & smallest Digit.

#include<stdio.h>

int Difference(int iNo)
{
    int iMin=9,iMax=0,iDigit=0;
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
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        iNo=iNo/10;
        
           }
            
    return iMax-iMin;
}
int main()
{
    int iValue=0,iRet=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet=Difference(iValue);
    printf("Difference between largest & smallest digit is %d",iRet);
}