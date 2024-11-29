

#include <stdio.h>

void displayArray(int array[], int size) {
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]); 

    
    displayArray(arr, size);

    return 0;
}
