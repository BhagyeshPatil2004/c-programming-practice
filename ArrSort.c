#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
int linearSearch(int arr[], int size, int target);
int binarySearch(int arr[], int size, int target);
int* generateRandomArray(int size);

int main() {
    int arraySizes[] = {1000, 5000, 10000, 50000, 100000};
    
    for (int i = 0; i < 5; i++) {
        int size = arraySizes[i];
        int* randomArray = generateRandomArray(size);
        
        clock_t mergeSortStartTime = clock();
        mergeSort(randomArray, 0, size - 1);
        clock_t mergeSortEndTime = clock();
        double mergeSortRuntime = ((double)(mergeSortEndTime - mergeSortStartTime)) / CLOCKS_PER_SEC * 1000;
        
        int targetLinear = randomArray[size / 2];
        
        clock_t linearSearchStartTime = clock();
        linearSearch(randomArray, size, targetLinear);
        clock_t linearSearchEndTime = clock();
        double linearSearchRuntime = ((double)(linearSearchEndTime - linearSearchStartTime)) / CLOCKS_PER_SEC * 1000;
        
        clock_t binarySearchStartTime = clock();
        binarySearch(randomArray, size, targetLinear);
        clock_t binarySearchEndTime = clock();
        double binarySearchRuntime = ((double)(binarySearchEndTime - binarySearchStartTime)) / CLOCKS_PER_SEC * 1000;
        
        printf("Array Size: %d\n", size);
        printf("Merge Sort Runtime: %.2f milliseconds\n", mergeSortRuntime);
        printf("Linear Search Runtime: %.2f milliseconds\n", linearSearchRuntime);
        printf("Binary Search Runtime: %.2f milliseconds\n", binarySearchRuntime);
        printf("------------------------\n");

        free(randomArray);
    }

    return 0;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* leftArray = (int*)malloc(n1 * sizeof(int));
    int* rightArray = (int*)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArray[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }

    free(leftArray);
    free(rightArray);
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
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

int* generateRandomArray(int size) {
    int* array = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000; // Adjust the range as needed
    }
    return array;
}
