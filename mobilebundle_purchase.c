//Hello World 
/* 
Name: IRUNGU JAMES NDIRANGU 
Registration Number: PA106/G/28731/25
Description: Propram To prompt user to purchase mobile data bundle
Date: 1/10/2025
*/

#include<stdio.h>//Preprocessor directive scanf(), printf()

//Main function 
int main(){
           int choice;
           
           //Menu Display 
           printf("Choose Your Bundle\n");
           printf("1. 100MB @50KES\n");
           printf("2. 500MB @200KES\n");
           printf("3.  1GB  @350KES\n");
           printf("4.  2GB  @600KES\n");
           printf("Enter bundle option:");
           scanf("%d", &choice);
           
           switch (choice){
                       case 1:
                       printf("You selected 100MB-Cost 50KES\n");
                       break;
                       case 2:
                       printf("You selected 500MB-Cost 200KES\n");
                       break;
                       case 3:
                       printf("You selected 1GB-Cost 350KES\n");
                       break;
                       case 4:
                       printf("You selected 2GB-Cost 600KES\n");
                       break;
                       default:
                       printf("Invalid Choice\n");
                    
                       }
                       
                       
                       return 0;
                       
                       }