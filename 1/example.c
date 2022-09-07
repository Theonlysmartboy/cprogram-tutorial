#include<stdio.h>//This is #include pre-processor
int number=1;//This is a global variable. Global variables can be accessed from anywhre within the program
void my_function(int my_number) /* This is a function called my_function. It returns nothing hence the void at the beginning my number is a parameter. Parameters are used to pass values and arguments to the function from the calling function */
{
	printf("My function has been called.%d \n",&my_number); // This is a statement. Print statement
}
int main(int argc, char const *argv[]) //This is the main function, it is the one used to run the program
{
	//this is a single line comment.
	/*
	This is a multiple line comments.
	Line1
	Line2
	.
	.
	*/
	int local_variable=100;//This is a local variable. local variables can only be accesed within the function within which they were created
	my_function(number); //This is a function call statement. It is used to call and pass varriables or arguments to the function
	if( local_variable==100 ) //if is a statement and localvariable==100 is an expression
	{
		printf("Local variable value is 100");
	}
	else
	{
		printf("Local variable value is not 100");
	}
	return 0;
}