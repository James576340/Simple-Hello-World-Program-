/* 
Name: IRUNGU JAMES NDIRANGU 
Reg Number: PA106/G/28731/25
Description: Functions 
*/

#include <stdio.h>

float calculateFare(float distance) {
    float fareRate = 50.0;
    return distance * fareRate;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}