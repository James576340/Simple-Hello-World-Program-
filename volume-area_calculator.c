//Hello World Program 
/*Name: IRUNGU JAMES NDIRANGU 
Reg No: PA106/G/28731/25
Description: Program To prompt user to enter height and radius to calculate volume and area of a cylinder 
*/

#include <stdio.h> //Preprocessor directive printf(),scanf()
#define PI 3.14159

//main function 
int main() 
{
            float radius;
            float height;
            float Volume;
            float surfacearea;
            
      //Prompt user for input 
      printf("Enter the radius of the cylinder:");
      scanf("%f",&radius);
      printf("Enter height of the cylinder:");
      scanf("%f",&height);
      
      //Calculate volume of cylinder 
      Volume= PI * radius * radius * height;
      //Calculate surface area of cylinder 
      surfacearea=( 2 * PI * radius * radius)+(2 * PI * radius *height);
      
      //Display results 
      
      printf("Volume of cylinder: %.2fcubic units\n", Volume);
      printf("Surface area of cylinder: %.2fcubic squared\n",surfacearea);
      
      
      
      return 0;
      
            
}
