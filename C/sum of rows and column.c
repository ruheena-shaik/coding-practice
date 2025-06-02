#include<stdio.h>
main()
{
    int i,j,n,sumr=0,sumc=0;
    printf("Enter the number of rows and column:");
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sumr = sumr+matrix[i][j];
            sumc = sumc+matrix[j][i];
        }
    }
    printf("The sum of rows in the given matrix is %d",&sumr);
     printf("The sum of column in the given matrix is %d",&sumc);

}