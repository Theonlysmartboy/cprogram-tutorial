/*
Documentation section
C programming components
*/
#include <stdio.h> /* Link section */
int subtract = 0; /* Global declaration, definition section */
int all (int, int); /* Function declaration section */
int main () /* Main function */
{
printf("Welcome to DataFlair tutorials!\n\n");
printf ("This is a C program \n");
subtract= all (25,10);
printf ("Subtraction of the two numbers : %d \n", subtract);
return 0;
}
int all (int x, int y) /* User defined function */
{ 
return x-y; /* definition section */
}