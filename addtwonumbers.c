#include <stdio.h>
int main(){
    // variables to hold the two numbers, calculated sum, difference and product
    int number1, number2, sum, diff, prod;
    // variable to hold the clculated quotient declared as floating point to take care of decimals too. 
    float div; 
    
    printf("Please enter the two numbers you want to add, subtract, multiply and divide separate the two numbers by a space: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2; 

     // calculating difference
    diff = number1 - number2; 

     // calculating product
    prod = number1 * number2;

     // calculating quotient
    div = number1 / number2;      
    
    // print the sum preformatted to show the numbers being added and the operator user i.e a + b = c
    printf("%d + %d = %d", number1, number2, sum);
    //print an empty line. this ensures that the next print begins on a new line
    printf("\n");
     // print the difference preformatted to show the numbers being subtracted and the operator user i.e a - b = c
    printf("%d - %d = %d", number1, number2, diff);
     //print an empty line. this ensures that the next print begins on a new line
    printf("\n");
     // print the product preformatted to show the numbers being multiplied and the operator user i.e a x b = c
    printf("%d x %d = %d", number1, number2, prod);
     //print an empty line. this ensures that the next print begins on a new line
    printf("\n");
     // print the quotient preformatted to show the numbers being divided and the operator user i.e a / b = c
    printf("%d / %d = %f", number1, number2, div);
    return 0;
}