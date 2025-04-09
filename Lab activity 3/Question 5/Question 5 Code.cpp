#include <stdio.h>

void reorderArray(int *arr1, int *arr2, int size1, int size2) { //Size1 represents size of array 1 and size2 represents that for array 2.
    int temp[size1]; //For storing reordered elements.
    int index = 0;

    for (int i = 0; i < size2; i++) { //Iterate over each element in array 2.
        for (int j = 0; j < size1; j++) { //Iterate over each element in array 1.
            if (arr2[i] == arr1[j]) { //If an element in array 1 matches the current element in array 2, add it to the temp array at the current index.
                temp[index++] = arr1[j]; //Then increase index.
                break;
            }
        }
    }

    for (int i = 0; i < size1; i++) { //Copy temp array back to original array.
        arr1[i] = temp[i];
    }
}

int main() {
    int arr1[] = {50, 40, 70, 60, 90};
    int arr2[] = {40, 50, 60, 70, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]); //Both array sizes are determined by dividing total size by size of one element.
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    reorderArray(arr1, arr2, size1, size2); //Reorder arrays.

    printf("Reordered array: "); 
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]); //Print the reordered array 1.
    }
    printf("\n");

    return 0;
}
