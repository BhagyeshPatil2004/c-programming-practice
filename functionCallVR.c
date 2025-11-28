#include <stdio.h>
void incrementByValue();
void incrementByReference();
int main() {
    int num1 = 5, num2 = 5;
    
    printf("Before function calls, num1 = %d and num2 = %d\n", num1, num2);
    
    // Calling incrementByValue function
    incrementByValue(num1);
    
    // Calling incrementByReference function
    incrementByReference(&num2);
    
    printf("After function calls, num1 = %d and num2 = %d\n", num1, num2);
    
    return 0;
}
// Function that accepts an integer by value
void incrementByValue(int num) {
    num = num + 1;
}

// Function that accepts an integer by reference
void incrementByReference(int *num) {
    *num = (*num) + 1;
}
