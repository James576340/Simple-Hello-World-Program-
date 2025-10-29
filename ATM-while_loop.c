/* 
Name: IRUNGU JAMES NDIRANGU 
Registration Number: PA106/G/28731/25
Date: 13/10/2025
*/

#include <stdio.h>//Preprocessor directive scanf("");,printf("");
int main (){
           float balance = 1000.00;//Initial balance
           float withdraw;
        printf("Current balance is Ksh %.2f\n",balance);
        //Withdrawal 
        while(balance>0){
        printf("Enter amount to withdraw ");
        scanf("%f", &withdraw);
        
        if(withdraw>balance){
        printf("Insufficient funds!\n");
        }
        else {
          balance -= withdraw;
        }
        printf("Remaining balance is Ksh %.2f\n", balance);
        }
        printf("Account balance os zero/negative.No further withdrawal allowed.");
  
  return 0;
  }