#include <stdio.h>

void findLargestAndSmallest(int arr[], int *largest, int *smallest) {
    
    int i;
    for (i = 0; i < 7; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

int main() {
    int arr[7] = {12, 34, 5, 8, -7, 55, 18};  
    int largest = arr[0];
    int smallest = arr[0];

    findLargestAndSmallest(arr, &largest, &smallest);

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}

