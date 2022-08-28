#include<stdio.h>

//function to calculate square of number
float squareOfNumber(int num)
{
    return (num*num);
}

int main()
{
    int number, square;
    
    float squaref;
    printf("Please Enter any integer Value : ");
    scanf("%d", &number);
    // getting the square without using a function
    square = number * number;
    // getting the square using a function
    squaref = squareOfNumber(number);
    printf("square of %d without using a function is:  %d", number, square);
    printf("\n");
    printf("square of %d using a function is:  %.2f", number, squaref);
    printf("\n");
    return 0;
}
