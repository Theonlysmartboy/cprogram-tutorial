#include<stdio.h>
#include <math.h>
int main(){
    int number = 30; 
    int square;
    float squareRoot;
    printf("Number \t Square \t Square root\n");
    do {
square = number*number;
squareRoot = sqrt(number);
printf("%d \t %d \t %.2f \n", number, square, squareRoot);
number = number+2;

}
while (number<=50);
}