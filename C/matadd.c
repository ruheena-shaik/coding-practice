#include<stdio.h>
main()
{
    int n,m,i,j,k,l;
    printf("Enter the number of rows of 1st matrix:");
    scanf("%d",&n);
    printf("Enter the number of column of 1st matrix:");
    scanf("%d",&m);
     printf("Enter the number of rows of 2nd matrix:");
    scanf("%d",&k);
    printf("Enter the number of column of 2nd matrix:");
    scanf("%d",&l);
    if(n!=k || m!=l)
    {
        printf("the addition of the matrix is not possible because the 2 matrics have different rows and columns");
    }
    int a[n][m],b[k][l],c[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    printf("the added matrix is:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
        
    }
}
