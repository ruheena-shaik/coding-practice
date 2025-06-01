#include <stdio.h>
main() 
{
    int n,m,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of column: ");
    scanf("%d",&m);
    int matrix[n][m];
    for(i = 0; i < n; i++)
     {
        for(j = 0; j < m; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int max = matrix[0][0];
    for(i = 0; i < n; i++)
     {
        for(j = 0; j < m; j++) 
        {
            if(matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    printf("The largest element in the matrix is: %d\n", max);
}
