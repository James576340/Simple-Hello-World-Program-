//Hello World Program 
/*Name: IRUNGU JAMES NDIRANGU 
Reg No: PA106/G/28731/25
Description: Program To Calculate water bill
*/

#include<stdio.h>// Preprocessor directive printf() scanf()

//main function 
int main(){
          int units;
          float totalbill;
          
      printf("Enter number of water bill consumed:");
      scanf("%d", &units);
      
      //Condition 
      if( units <= 30){
         totalbill = units * 20;
       } 
       else if( units <= 60){
          totalbill = units * 25;
       }
       else{
          totalbill = units * 30;
       }
          
       printf("Total water Bill: %.2f KES\n", totalbill);
       
       
       return 0;
          
          
          
          
          
     }