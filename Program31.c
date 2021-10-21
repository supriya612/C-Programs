//Accept N numberd from user & diplsay that numbers on screen
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int i=0;
    printf("Elements from the array are:");
    for(i=0;i<iLength;i++)
    {
        printf("%d\n",Arr[i]);
    }
}

int main()
{
    int iSize=0,i=0;
    int *arr=NULL;
     printf("Enter the size of array\n");
     scanf("%d",&iSize);
     arr=(int*)malloc(iSize*sizeof(int));
     printf("enter the elements\n");
     for(i=0;i<iSize;i++)
     {
         scanf("%d",&arr[i]);
     }
     Display(arr,iSize);
     free(arr);
     return 0;
}