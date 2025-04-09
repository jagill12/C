#include <stdio.h>

int binarySearch(int *arr, int size, int target) {
	//Binary search is useful in a sorted array.
	//It works by dividing the search interval in half, and determining if the chosen element to return is larger or smaller than the middle point.
	//If the element is smaller than the middle item, the algorithm narrows the search to the lower half, and vice versa for being larger.
	//It repeats this process until it finds the desired element.
	
    int left = 0; //Starting point is left.
    int right = size - 1; //Final point is right.

    while (left <= right) { //Continuously narrow down until we reach the middle element if necessary.
        int mid = left + (right - left) / 2; //Middle is the average between the highest and lowest value of the current iteration.

        if (*(arr + mid) == target) { //If target value is middle value, return middle value.
            return mid;
        }

        if (*(arr + mid) < target) {
            left = mid + 1; //If larger than middle value, lower index becomes the right half.
        } else {
            right = mid - 1; //If smaller than middle value, upper index becomes left half.
        }
    }
    return -1; //If target is not found.
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]); //Divide array size by the size of the data type at the first element. Since all elements are the same data type, the size will always be the number of elements.
    int target = 7;

    int result = binarySearch(arr, size, target);
    if (result != -1) { //If result is somewhere in the array.
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
