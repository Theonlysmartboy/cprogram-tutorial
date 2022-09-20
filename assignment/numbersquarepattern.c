#include <stdio.h>
int main(){
    int startNumber = 3;
    int repeatTo = 5;
    int i, square;
    for (i = 0; i < repeatTo; i++){
        square = startNumber * startNumber;
        printf("%d \t %d \n", startNumber, square);
        startNumber = startNumber+4;
    }
    return 1;
}