#include <stdio.h>

void swap(int *arr, int i, int j) {

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void print_array(int *arr, int n) {

    for(int i = 0; i < n; i++) {

        printf("%d ", arr[i]);
    }
}

int main() {

    // inital values
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // two pointer approach
    int i = 0;
    int j = n - 1;
    
    // Swap till n / 2 or i < j
    while (i < j) {

        swap(arr, i, j);
        i = i + 1;
        j = j - 1;
    }
    printf("Reversed the array using pass two pointers:\n");
    print_array(arr, n);


    // without two pointers
    for(int i = 0; i < n/2; i++) {

        swap(arr, i, n-i-1);
    }
    printf("\nReversed the array using non-two pointer approach:\n");
    print_array(arr, n);
    return 0;
}
