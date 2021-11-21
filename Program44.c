//Accept a number from user & display *3  *2  *1

#include<stdio.h>
void Pattern(unsigned int iValue1)
{
    int iCnt=0;
    for(iCnt=iValue1;iCnt>=1;iCnt--)
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