/* 
Name: IRUNGU JAMES NDIRANGU 
Reg Number: PA106/G/28731/25
Description: Functions 
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(fahrenheit));
    return 0;
}