#include <stdio.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
};

int main()
{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    // Assign values to members of the structure s1
    s1.myNum = 13;
    s1.myLetter = 'B';

    // Print the values assigned
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);

    return 0;
}