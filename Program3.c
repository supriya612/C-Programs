#include<stdio.h>
void DisplayNumbers(int iNo1)
{
    int i=0;
    if(iNo1==0)
    {
        return;
    }
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    for(i=1;i<=iNo1;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int iValue1=0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    DisplayNumbers(iValue1);
    return 0;
}