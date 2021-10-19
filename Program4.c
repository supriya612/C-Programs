#include<stdio.h>
int DisplaySum(int iNo)
{
    int i=0,iSum=0;
    if(iNo==0)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;

    }
    for(i=1;i<=iNo;i++)
    {
        iSum=iSum+i;
    }
    return iSum;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d\n",&iValue);
    iRet=DisplaySum(iValue);
    printf("Addition of numbers %d\n",iRet);
    return 0;
}