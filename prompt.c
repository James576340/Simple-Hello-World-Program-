//Simple Hello World program
/*
Name: IRUNGU JAMES NDIRANGU 
Reg No: PA106/G/28731/25
Description: Program To prompt user to enter and display 
*/

#include <stdio.h> //Preprocessor directive printf(),scanf()

//main function 
int main() {
            float height;
            int IDnumber;
            double bankbalance;
            
            //propmt user for inputs
            printf("Enter your height in cm: ");
            scanf("%f",&height);
            
            printf("Enter your ID number:");
            scanf("%d", &IDnumber);
            
            printf("Enter your Bank balance:");
            scanf("%lf", & bankbalance);
            
            //Display the entered data
            printf(" User information \n");
            printf("Height: %.2f centimeters\n",height);
            printf("ID number: %d\n",IDnumber);
            printf("Bank balance: %.2lf\n", bankbalance);
            
            
            return 0;
            
            }