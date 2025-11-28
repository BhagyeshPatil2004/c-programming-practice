#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int sortedArray[] = {3, 9, 10, 27, 38, 43, 82};
    int n = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int targetLinear = 27;
    int targetBinary = 38;

    int linearSearchResult = linearSearch(sortedArray, n, targetLinear);
    if (linearSearchResult != -1) {
        printf("Linear Search: Element %d found at index %d\n", targetLinear, linearSearchResult);
    } else {
        printf("Linear Search: Element %d not found in the array\n", targetLinear);
    }

    int binarySearchResult = binarySearch(sortedArray, 0, n - 1, targetBinary);
    if (binarySearchResult != -1) {
        printf("Binary Search: Element %d found at index %d\n", targetBinary, binarySearchResult);
    } else {
        printf("Binary Search: Element %d not found in the array\n", targetBinary);
    }

    return 0;
}
