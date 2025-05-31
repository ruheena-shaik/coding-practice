#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of rows and column:");
	scanf("%d",&n);
	int matrix[n][n];
	int id=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",& matrix[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && matrix[i][j]!=1)  
			{
				id=0;
				if(i!=0 && matrix[i][j]!=0)
				{
					id=0;
				}
			}
			else
			id=0;
			
		}
	}
	if(id==0)
	{
		printf("this is not a unit matrix");
	}
	else
	{
		printf("this is a unit matrix");
	}
}
