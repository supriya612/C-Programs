#include<stdio.h>
#include<stdbool.h>
bool CheckDivision(int iNo1,int iNo2)
{
   // int iNo1,iNo2;
    if((iNo1==0)&&(iNo2==0))
    {
        return 0;
    }
    if((iNo1<0)&&(iNo2==0))
    {
        iNo1=-iNo1;
        iNo2=-iNo2;
    }
    if((iNo1%iNo2)==0)
    {
        return true;
    }
    else{
        return false;
    }
    
}
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;
    printf("enter two numbers\n");
    scanf("%d%d",&iValue1,&iValue2);
    bRet=CheckDivision(iValue1,iValue2);
    if(bRet==true)
    {
        printf("%d is Divisible by %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is not divisible by %d\n",iValue1,iValue2);
    }
    return 0;
}