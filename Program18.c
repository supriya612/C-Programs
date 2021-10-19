//accept a number from user & display sum of its digits
 
 #include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit=0,iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iSum=iSum+iDigit;
        }
        return iSum;
}
 int main()
 {
     int iValue=0,iRet=0;
     printf("enter number\n");
     scanf("%d",&iValue);
     iRet=SumDigits(iValue);
     printf("Addition of digits is: %d",iRet);
     return 0;
 }