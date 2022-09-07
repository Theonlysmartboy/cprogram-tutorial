#include <stdio.h>
int main(){
    // variables to hold the two numbers, calculated sum, difference and product
    int length, width, area, perimeter;
    
    // variable to hold the clculated quotient declared as floating point to take care of decimals too. 
    //Display user instruction on the screen 
    printf("Please enter the length and width of the rectangle separating each by a single space. Press Enter when done typing the number: ");
    //get the first number using scanner
    scanf("%d %d", &length, &width);

    // calculating the area using the formula, area us Length time width
    area = length * width; 

     // calculating perimeter using the formula of perimeter is twice the sum of length and width
    perimeter = 2 * (length + width);      
    
    // print the area
    printf(" Length = %d Width = %d Area = %d", length, width, area);
    //print an empty line. this ensures that the next print begins on a new line
    printf("\n");
     // print the perimeter
    printf(" Length = %d Width = %d Perimeter = %d", length, width, perimeter);
    printf("\n");
    return 0;
}