#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
    if(iNo==0)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if((iNo%2)==0)
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
    bool bRet=false;
    printf("Enter number\n");
    scanf("%d\n",&iValue);
    bRet=CheckEven(iValue);
    if(bRet==true)
    {
        printf("number is even\n");
    }
    else
    {
        printf("odd number\n");
    }
    return 0;
}