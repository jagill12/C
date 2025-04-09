#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) { //Start at 0.
        int temp = *(arr1 + i); //Create a temp array that array 2 will eventually become.
        *(arr1 + i) = *(arr2 + i); //This spot in array 1 becomes this spot in array 2.
        *(arr2 + i) = temp; //Array 2 now becomes the temp position from array 1.
    }
}

int main() {
    int size = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10}; //Example arrays of size 5.

    printf("Before swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]); //Simply print out the first array.
    }
    printf("\nArray 2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]); //Simply print out the second array.
    }

    swapArrays(arr1, arr2, size); //Swap them with the void function above.

    printf("\n\nAfter swapping:\n");
    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]); //Now array 1 shows what was originally array 2.
    }
    printf("\nArray 2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]); //Now array 2 shows what was originally array 1.
    }

    return 0;
}
