#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        return 0;
    }
    if(((iNo%3)==0)&&((iNo%5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet;
    printf("enter number\n");
    scanf("%d",&iValue);
    bRet=CheckDivisible(iValue);
    if(bRet==true)
    {
        printf("Number is divisible by 3 & 5");
    }
    else
    {
        printf("Number is not divisible by 3 & 5");
    }
    return 0;
}