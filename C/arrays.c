
/*
 * Create an array of 5 numbers
 * 1. write a function to return the size of an array
 * 2. write a function to print those 5 numbers
 * 3. write a function to calculate the sum of 5 numbers
 * 4. write a function to reverse an array
 * 5. write a function to print the largest number in an array
 * 6. write a function to print the second largest number in the array
 * 7. write a function to print the smallest number in the array
 */

/*
 * return_type function_name(input_type input_variable_1, input_varabile_2 ...) {
 *  // code logic 
 *  return return_type_variable;
 * }
*/
 
// 1. Write a function to return the size of the array
// Function to calculate the size of an array
#include <stdio.h>

void print_array(int array[]) 
{
    int i = 0;
    while (array[i] != -1)
     {
        printf("%d ", array[i]);
        i++;
    }
}

int sum_array(int array[]) 
{
    int sum = 0;
    int i = 0;
    while (array[i] != -1) {
        sum =sum + array[i];

        i++;
    }
    return sum;
}
void reverse_array(int array[],int size)
{
    int i;
    for(i=size-1;i>0;i++)
    {
        printf("%d",&array[i]);
    }
}
int largest(int array[],int size)
{
    int i;
    int max = array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    return max;
}
int smallest(int array[],int size)
{
    int i;
    int min = array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]<min)
        {
            min=array[i];

        }
    }
    return min;
}


int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("The size of the array is: %d\n", size);

    printf("The elements of the array are: ");
    print_array(numbers, size);

    int sum = sum_array(numbers, size);
    printf("The sum of the elements is: %d\n", sum);

    printf("The array in reverse order is: ");
    reverse_array(numbers, size);

    int max = largest(numbers, size);
    printf("The largest element is: %d\n", max);

    int second = second_largest(numbers, size);
    printf("The second largest element is: %d\n", second);

    int min = smallest(numbers, size);
    printf("The smallest element is: %d\n", min);

    return 0;
}

