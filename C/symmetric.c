#include <stdio.h>
main()
{
    int i,j,n,s = 1;
    printf("Enter the number of rows and column: ");
    scanf("%d", &n);
    int matrix[n][n];

    for (i=0; i<n;i++)  
	 {
        for (j=0; j<n;j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0;i<n;i++) 
	{
        for (j= 0;j<n;j++)
		 {
            if (matrix[i][j] != matrix[j][i])
			 {
                s = 0;
                break;
            }
        }
        if (s==0)
            break; 
    }

    if (s == 1)
	{
        printf("The given matrix is symmetric\n");
    } else {
        printf("The given matrix is not symmetric\n");
    }

    return 0;
}
