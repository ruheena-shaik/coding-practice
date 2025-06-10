#include <stdio.h>


/*
    Function: What should it do ? 
    1. Input parameters
    2. Output Parameters
*/ 

/*
    Divide: A function to divide two numbers.
    1. Input: 2 Float or Int numbers
    2. Output: Float
*/

float divide_numbers(float num_1, float num_2) {

    float result = num_1 / num_2;
    return result;
}


/*
    Given a sorted array in non-descending order. Find two numbers (indices) which are equal to the target value
    If more than one pair exists, give any of such pairs. Do not use the same number at the same index.

    sample input:
        arr = [1, 2, 3, 4, 5, 6]
        target = 9
    sampel output: [3, 4] or [2, 5]
    [index_1, index_2]

    Add more test cases yourself.
*/

int main()
{
    int n,i,flag=0,sum=0,ele;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n],le=0,ri=n-1;

    if(n==0)
        printf("array does not exists");
    else
    {
        printf("Enter the sorted elements in the array:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter the element to find the pair:");
        scanf("%d",&ele);
        while(le<ri)
        {
            sum=arr[le]+arr[ri];
            if(sum==ele)
            {
                printf("Pair found %d %d\n",arr[le],arr[ri]);
                flag=1;
                break;

            }
            else if(sum < ele)
            {
                le++;

            }
            else{
                ri--;   
            }

        }
        if(flag==0)
        {
            printf("no pair is found.\n");
        }
        
        

    }
    return 0;
}