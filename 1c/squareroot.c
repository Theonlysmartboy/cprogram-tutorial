#include <math.h>
#include <stdio.h>

// Function to find the square-root of N
double findSQRT(double N)
{
    return sqrt(N);
}

// Driver Code
int main()
{

    // Given number
    int number;
    double squareRoot;
    printf("Please Enter any integer Value : ");
    scanf("%d", &number);

    // Function call
    squareRoot = findSQRT(number);

    printf("square root of %d is:  %.2f", number, squareRoot);
    return 0;
}