#include <stdio.h>

void pass_by_reference(int *a) {

    printf("i address value inside pass by reference:%p\n", (void*)a);
    *a = 10;
}

void pass_by_value(int a) {

    a = 100;
}

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++)
        printf("Value: %d, Address: %p\n", arr[i], (void*)&arr[i]);
}


/*
i value before pass by value 5
i value after pass by value 5
i value before pass by reference 5
Value of a inside pass by reference:0x16bb4ebc8
i value after pass by reference 10
*/
int main() {

    int i = 5;

    printf("i value before pass by value %d\n", i);
    pass_by_value(i); // 5
    printf("i value after pass by value %d\n", i);


    printf("i value before pass by reference %d\n", i);
    pass_by_reference(&i); // 10
    printf("i value after pass by reference %d\n", i);

    int arr[4] = {1, 2, 3, 4};
    print_array(arr, 4);

    return 0;
}