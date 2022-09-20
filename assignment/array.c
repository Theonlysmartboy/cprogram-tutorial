#include <stdio.h>

int main()
{
    // declare an array of type integer that will hold 4 elements
    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    // loop through the entire length of the array
    for (i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++)
    {
        // print out the value of the array element at each index
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}