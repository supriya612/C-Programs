//Accept a number from user & display *#

#include<stdio.h>
void Pattern(unsigned int iValue1)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iValue1;iCnt++)
    {
        printf("*\t#");
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