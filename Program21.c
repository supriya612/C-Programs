//Accept a number from user & display multiplication of digits

#include<stdio.h>

int MulDigits(int iNo)
{
  int iDigit=0,iMult=1,iCnt=0;
  if(iNo<0)
  {
      iNo=-iNo;
  }
  while(iNo>0)
  {
      iDigit=iNo%10;
     if(iDigit!=0)
     {
         iMult=iMult*iDigit;
     }
     iNo=iNo/10;
     }
  return iMult;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=MulDigits(iValue);
    printf("Multiplication of digits is:%d",iRet);
    return 0;
}