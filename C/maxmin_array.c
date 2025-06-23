#include<stdio.h>

//function to find the max and min elements in the array
maxmin_array(int arr[],int size, int *max, int *min){
    int i;
    for(i = 0; i < size; i++){
        *max = arr[0]; 
        *min = arr[0];
        if(arr[i] > *max){
            *max = arr[i];
        }
        else if(arr[i] < *min){
            *min = arr[i];
        }
    }
}

int main(){
    int size,i,max,min;
    printf("Enter the size of the array:");
    scanf("%d",&size); //taking input of the size of the array
    int arr[size];

    printf("Enter the elements  of the array:");//taking input of the elements in the array
    for(i = 0; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    maxmin_array(arr,size,&max,&min);//calling the function
    printf("the max and min values of the array is %d and %d",max,min);

    return 0;
}