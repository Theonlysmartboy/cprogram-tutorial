#include <stdio.h>
int main()
{
   //Variable declaration
   int num = 10;

   //Pointer declaration
//The * Operator is also known as Value at address operator.
   int *p;

   //Assigning address of num to the pointer p
   p = &num;

   //The & operator is also known as Address of Operator.

   printf("Address of variable num is: %p", p);
   return 0;
}