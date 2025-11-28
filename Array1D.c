#include <stdio.h>
#include <math.h>

int main() {
   char binary[8];

   printf("Enter an 8-bit binary number: ");
   for (int i = 0; i < 8; ++i) {
       scanf(" %c", &binary[i]);  // Read with leading space to consume newline
       if (binary[i] != '0' && binary[i] != '1') {
           printf("Invalid input. Enter only '0's and '1's.\n");
           return 1;
       }
   }

   int decimal = 0;
   for (int i = 7; i >= 0; --i) {
       decimal += (binary[i] - '0') * pow(2, 7 - i);  // Calculate decimal value
   }

   printf("Decimal value: %d\n", decimal);

   return 0;
}
