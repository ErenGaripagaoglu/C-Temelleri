#include <stdio.h>
#define SIZE 10
#define ARRAY1_SIZE 20

int bubbleSort(int a[], int size) {
    
    int pass, i, hold;
    
    for (pass = 1; pass < size; pass++) {
        for(i = 0; i < size -1; i++) {
            
            if(a[i] > a[i +1]) {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    
    return 0;
}

int findMode(int arr[], int arr_size) {
    int maxValue = 0; // Stores the element that appears most often
    int maxCount = 0; // Stores the frequency of the current mode
    
    // Outer loop: Pick each element one by one
    for (int i = 0; i < arr_size; ++i) {
        int count = 0; // Reset counter for the current element arr[i]
        
        // Inner loop: Check arr[i] against every other element in the array
        for (int j = 0; j < arr_size; ++j) {
            if (arr[j] == arr[i]) {
                ++count; // Increment if a match is found
            }
        }

        // Comparison: If current element's frequency is higher than our record
        if (count > maxCount) {
            maxCount = count;  // Update the highest frequency found so far
            maxValue = arr[i]; // Update the mode value to the current element
        }
    }

    return maxValue; // Return the final result to the caller
}

int main() {
    int c[10]; // c is an array of 10 integers
    // type name[size]
    
    /*
     Size is actual number of elements in array
     Index number starts with 0 to count so index is size-1
     */
    
    // initialization and definition
    int c2[10] = {0}; // = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    int c3[SIZE]; //gets size value from constant
    int c4[] = {1, 2, 3, 4, 5}; // if size is not given, initializer count auto assigns it
    
    int c5[3] = {0, 1}; // if size value is more than initializers, then remaining indexes initialize with value 0
    printf("%d", c5[2]);
    
    int i;
    for (i = 0; i < SIZE; i++) {
        c[i] = i; // assigning values to a specific index of an array
    }
    
    for (i=0; i < SIZE; i++) {                      // refers to i. index
        printf("The %d element of the array is %d\n", i+1, c[i]);
    }                                                   // arrayName[index]
    
    
    /* MEAN - MEDIAN - MODE
     
        Mean = Average (Sum/NumOfElements)
        Median = Element in the Middle of SORTED Array
        Mode = Most Occuring Element
     
     */
    int array1 [ARRAY1_SIZE] = {3, 8, 2, 7, 5, 6, 4, 9, 1, 5, 2, 3, 2, 4, 15, 56, 47, 98, 39, 70};
    int sum = 0;
    
    for (int i=0; i < ARRAY1_SIZE; i++) {
        sum += array1[i];
    }
    printf("Mean:%d \n", sum/2); // mean
    
    
    bubbleSort(array1, ARRAY1_SIZE);
    printf("Median:%d \n", array1[ARRAY1_SIZE / 2]); // median
    
    printf("Mode:%d \n", findMode(array1, ARRAY1_SIZE)); // mode
    
    
    return 0;
}
