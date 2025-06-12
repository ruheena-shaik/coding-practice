#include<stdio.h>
int main()
{
    int i,n,co=0,num;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to find the occurence: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            co++;
        }

    }
    printf("%d",co);
    return 0;
}