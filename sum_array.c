#include<stdio.h>

//function to caluculate the sum of the array

void sum_array(int arr[],int size,int *sum){
int i;
    *sum = 0; //initializing the sum with 0
    for(i = 0; i < size; i++){
        *sum += arr[i]; //sum of each element in the array
    }
}

int main(){
    int i, size, total;
    printf("Enter the size of the array:");
    scanf("%d", &size);   //input of the size of array

    int arr[size];

    // input of the elements in the array 
    printf("Enter the elements of the array:");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]); 
    }
    
    sum_array(arr, size, &total);//calling the function

    printf("The sum of the elements in the array is %d", total);//printing the sum of the elements in the array

    return 0;
}