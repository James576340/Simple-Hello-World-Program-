//Hello World Program 
/*Name: IRUNGU JAMES NDIRANGU 
Reg No: PA106/G/28731/25
Description: Program To check exam legibility of a student by attendance and average marks
Date:29/9/2025
*/

#include<stdio.h>
//main function 
int main(){
          float attendance ;
          float averagemarks;
          
          //Prompt User for Input
     printf("Enter your attendance percentage:");
     scanf("%f",& attendance);
     printf("Enter your average marks:");
     scanf("%f",& averagemarks);
     // Conditions
     if(attendance>=75 && averagemarks>=40){
     printf("Eligible");
     } else{
           printf("Not Eligible");
           }
          
      return 0;




}