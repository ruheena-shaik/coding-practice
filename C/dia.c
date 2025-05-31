#include<stdio.h>
main()
{
    int i,j,n,sum1=0,sum2=0;
    printf("Enter the number of rows and column for sqaure matrix:");
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
            if(i==j)
            {
                sum1 = sum1 + matrix[i][j];
            }
            else if(i+j==2)
            {
                sum2 = sum2 + matrix[i][j];
            }
        }
    }
    printf("%d\n",sum1);
    printf("%d\n",sum2);

}