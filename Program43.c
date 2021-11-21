//Accept a number from user & display 1*  2*  3*

#include<stdio.h>
void Pattern(unsigned int iValue1)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iValue1;iCnt++)
    {
        printf("%d*\t",iCnt);
    }
    printf("\n");
}
int main()
{
 unsigned int iNo1=0;
 printf("Enter number\n");
 scanf("%u",&iNo1);
 Pattern(iNo1);
 return 0;

}