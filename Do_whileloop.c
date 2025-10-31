/*
Name IRUNGU JAMES NDIRANGU 
Registration No: PA106/G/28731/25
Description: Do while loop program
*/

#include <stdio.h>

int main() {
    char password[20];
    int correct;

    printf(" Password Protected System \n");

    do {
        printf("Enter password: ");
        scanf("%s", password);

        // Compare input with correct password "1234"
        correct = 1;  // Assume correct
        if (password[0] != '1') correct = 0;
        else if (password[1] != '2') correct = 0;
        else if (password[2] != '3') correct = 0;
        else if (password[3] != '4') correct = 0;
        else if (password[4] != '\0') correct = 0;  // Must end here

        if (correct) {
            printf("Access Granted.\n");
        } else {
            printf("Incorrect password. Try again.\n");
        }
    } while (!correct);  // Repeat until correct

    return 0;
}