//Program to accept two numbers from user & display maximum from it
#include<stdio.h>
int Maximum(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a=0,b=0,iRet=0;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    iRet=Maximum(a,b);
    printf("Maximum number is :%d\n",iRet);
    return 0;
}