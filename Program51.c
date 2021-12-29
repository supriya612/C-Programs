/*   Input   4  4
     Output    1    $   $   $
               1    2   $   $
               1    2   3   *
               1    2   3   4   */
        
    #include<stdio.h>
    void Pattern(unsigned int iRow,unsigned int iCol)
    {
        int i=0,j=0;
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                if(i>=j)
                {
                 printf("%d\t",j);
                }
                
                else{
                   printf("$\t");
                }
            }
            printf("\n");
        }
    }
    int main()
    {
        unsigned int iValue1=0,iValue2=0;
        printf("Enter number of rows and columns\n");
        scanf("%d%d",&iValue1,&iValue2);
        Pattern(iValue1,iValue2);
        return 0;
    }
