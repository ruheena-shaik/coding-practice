#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);

 }
 int lar=arr[0];
 int sec=lar;

 for(i=0;i<n;i++)
 {
    if(arr[i]>lar)
    {
        sec=lar;
        lar=arr[i];
    }
    else if(arr[i] > sec && arr[i] != lar)
    {
        sec=arr[i];
    }
 }
 printf("the second largest element is %d",sec);
}