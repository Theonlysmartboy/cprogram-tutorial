#include <stdio.h>
int main(){
    int number1, number2, sum;
    
    printf("Please enter the two numbers you want to add, subtract, multiply and divide: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}