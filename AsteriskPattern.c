// Write four statements by using printf function to print an asterisk pattern having 1, 3,5 and 7 
//asterisks (*) in successive lines so that it generates a triangular pattern as given below.

#include<stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 7; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
