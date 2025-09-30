/* Hello World
Name: IRUNGU JAMES NDIRANGU 
REG NO: PA106/G/28731/25
Description: Program To Check Eligibility of a student for a scholarship 
Date: 30th September 2025
*/

#include <stdio.h>//Preprocessor Directive scanf() printf()

//main function 
int main() {
    float attendance;
    float averagemarks;
    
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter average marks: ");
    scanf("%f", &averagemarks);
    
    if (attendance >= 80 && averagemarks >= 60) {
        printf("Eligible");
    } else {
        printf("Not eligible");
    }
    
    return 0;
}
