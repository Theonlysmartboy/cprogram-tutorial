
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Functions
bool login(int pin);
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

// Main Code
int main()
{
    // Local Declarations
    int option;
    float balance = 15000.00;
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
                checkBalance(balance);
                break;
            case 2:
                system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
                system("CLS");
                balance = moneyWithdraw(balance);
                break;

            case 4:
                system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
            }

            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Would you like to peform another transaction:\n");
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
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");

} // Main Menu

void checkBalance(float balance)
{
    printf("Check Balance Option Selected\n");
    printf("\n\n****Your Available Balance is:   KSH%.2f\n\n", balance);

} // Check Balance

float moneyDeposit(float balance)
{
    float deposit;
    printf("Deposit Option Selected\n");
    printf("****Your Balance is: KSH%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);

    balance += deposit;

    printf("\n****Your New Balance is:   KSH%.2f\n\n", balance);
    return balance;

} // money deposit

float moneyWithdraw(float balance)
{
    float withdraw;
    bool back = true;

    printf("Withdrawal option selected\n");
    printf("***Your Balance is: KSH%.2f\n\n", balance);

    while (back)
    {
        printf("Enter the amount to withdraw:\n");
        scanf("%f", &withdraw);

        if (withdraw < balance)
        {
            back = false;
            balance -= withdraw;
            printf("\n**** Widhdrawn amount is:  KSH%.2f\n", withdraw);
            printf("**** New Balance is:   KSH%.2f\n\n", balance);
        }

        else
        {

            printf("+++You don't have enough money to widthdraw+++\n");
            printf("Please contact to your Bank's Customer Service\n");
            printf("****Your Balance is:   KSH%.2f\n\n", balance);
        }
    }
    return balance;

} // money withdrawn

void menuExit()
{
    printf("--------------Remember to take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");

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