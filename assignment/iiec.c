#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Functions
bool login(int pin);
void mainMenu();
void menuExit();
void errorMessage();
void registerVoter();
void printRegister();

char VOTER1[60] = "David";
char VOTER2[60] = "Kristin";
char VOTER3[60] = "Jim";
char VOTER4[60] =  "Donald";

// Main Code
int main()
{
    // Local Declarations
    int option;
    int choose;
    int myPin;

    bool again = true;

    // insert code here...
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Enter Your Pin Number:\t");
    scanf("%d", &myPin);

    if (login(myPin))
    {
        while (again)
        {
            mainMenu();

            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("Your Selection:\t");
            scanf("%d", &option);

            switch (option)
            {
            case 1:
                system("CLS");
                registerVoter();
                break;
            case 2:
                system("CLS");
                printRegister();
                break;
            case 3:
                system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
            }

            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Would you like to Continue:\n");
            printf("< 1 > Yes\n");
            printf("< 2 > No\n");
            scanf("%d", &choose);

            system("CLS");

            if (choose == 2)
            {
                again = false;
                menuExit();
            }
        }
    }
    else
    {
    }

    return 0;
} // main code

// Functions

void mainMenu()
{

    printf("******************Hello!*******************\n");
    printf("**********Welcome to IIEC VOTERS REGISTER***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  Register new Voter\n");
    printf("< 2 >  Print Voters Register\n");
    printf("< 3 >  Exit\n\n");

} // Main Menu

void printRegister()
{
    printf("Voters In the system\n");
    printf("\n 1. %s", VOTER1);
    printf("\n 2. %s", VOTER2);
    printf("\n 3. %s", VOTER3);
    printf("\n 4. %s", VOTER4);

}

void registerVoter(){

}

void menuExit()
{
    printf("-----Thank you for using IIEC VOTERS REGISTER Machine!!!-----\n");

} // exit menu

void errorMessage()
{
    ;
    printf("+++!!!You have selected an  invalid number!!!+++\n");
} // error message

bool login(int pin)
{
    int storedpPin = 12345678;
    if (storedpPin == pin)
    {
        return true;
    }
    else
    {
        printf("+++!!!You have enterd an  invalid Pin number!!!+++\n");
        return false;
    }
}