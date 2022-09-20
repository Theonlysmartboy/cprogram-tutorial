#include<stdio.h>
#include <math.h>
int main(){
    // pre conditions declare and initialize variables number = 30 while square has not been intialised.
    int number = 30; 
    int square;
    printf("Number \t Square \n");
    do {
        //do block
        //here we have the code block to be excecuted while the contion is still true
square = number*number;
printf("%d \t %d \n", number, square);
number = number+2;

}
while (number<=50);
// post condition number is > 50
//herer we put the code to be executed while the condition is false or while the loop is done running.
return 1;
}