#include <stdio.h>

// Function that accepts a pointer as a parameter
void square(int *num) {
    *num = (*num) * (*num);
}

int main() {
    int num = 5;
    
    printf("Before square function call, num = %d\n", num);
    
    // Passing the address of num to the square function
    square(&num);
    
    printf("After square function call, num = %d\n", num);
    
    return 0;
}
