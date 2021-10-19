//accept a number from user & check whether its palindrome or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
  int iRev=0,iDigit=0,iTemp=0;
  iTemp=iNo;
  while(iNo>0)
  {
      iDigit=iNo%10;
      iRev=(iRev*10)+iDigit;
      iNo=iNo/10;
  }
      if(iRev==iTemp)
      {
          return true;
      }
      else{
          return false;
      }
  
}

int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet=CheckPalindrome(iValue);
    if(bRet==true)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
}