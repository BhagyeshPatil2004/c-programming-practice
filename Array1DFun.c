#include <stdio.h>
#include <math.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void readArray(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int findMax(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int maxElement = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }
    return maxElement;
}

double calculateStdDev(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    double sum = 0.0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
    }
    double mean = sum / (rows * cols);
    double stddev = 0.0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            stddev += pow(arr[i][j] - mean, 2);
        }
    }
    return sqrt(stddev / (rows * cols));
}

void printTranspose(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Transpose of the matrix:\n");
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the array: ");
    scanf("%d %d", &rows, &cols);
    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Exceeded maximum array size.\n");
        return 1;
    }
    int array[MAX_ROWS][MAX_COLS];
    readArray(array, rows, cols);
    int maxElement = findMax(array, rows, cols);
    double stddev = calculateStdDev(array, rows, cols);
    printf("Maximum element: %d\n", maxElement);
    printf("Standard Deviation: %.6lf\n", stddev);  // Print with 6 decimal places
    printTranspose(array, rows, cols);
    return 0;
}
