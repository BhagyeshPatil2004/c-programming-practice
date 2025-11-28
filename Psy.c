//  A ball is released
// from a height of Y meters. Each time it bounces on the floor, its velocity
// becomes halved. Write a program, which reads the value of Y and prints the total
// distance traversed by the ball when it touches the ground for the third time. Assume
// that the value of acceleration due to gravity, g, is 9.8.

#include<stdio.h>
int main() {
    double Y, totalDistance = 0;
    const double g = 9.8; // acceleration due to gravity

    // Input the initial height
    printf("Enter the initial height (in meters): ");
    scanf("%lf", &Y);

    // Calculate the total distance for three bounces
    for (int i = 0; i < 3; i++) {
        // Distance covered during free fall
        totalDistance += Y;

        // Calculate the velocity after bouncing
        double velocityAfterBounce = 0.5 * g;

        // Calculate the height after bouncing
        Y *= 0.5;

        // Distance covered during the bounce
        totalDistance += Y;

        // Update the height for the next bounce
        Y *= 0.5;
    }

    printf("Total distance traversed by the ball after three bounces: %.2f meters\n", totalDistance);

    return 0;
}
