#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp = arr[0];
    for (i=0;i<n-1;i++)
     {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp; 
    printf("after left shift: ");
    for (i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
