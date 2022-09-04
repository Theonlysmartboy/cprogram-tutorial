#include<stdio.h>

void pointsCalculator(int phone_no, char f_name[60], char s_name[60], char surname[60], int balance);
int main()
{
   int phone_no, balance;
   char f_name[60], s_name[60], surname[60];
    printf("ENTER PHONE NUMBER: 254*******");
    scanf("%d", &phone_no);
     printf("ENTER CUSTOMER FIRST NAME:");
    scanf("%s", f_name);
     printf("ENTER CUSTOMER SECOND NAME:");
    scanf("%s", s_name);
     printf("ENTER CUSTOMER SUR NAME:");
    scanf("%s", surname);
     printf("ENTER BONGA CREDIT AMOUNT:");
    scanf("%d", &balance);
    pointsCalculator(phone_no, f_name, s_name, surname, balance);
    return 0;
}
void pointsCalculator(int phone_no, char f_name[60], char s_name[60], char surname[60], int balance)
{
    int bongaPoints;
    if(balance >= 2000){
        bongaPoints = 500;
    }else if (balance >= 1000){
        bongaPoints = 300;
    }else if (balance >= 500){
        bongaPoints = 100;
    }else if (balance >= 100)
    {
        bongaPoints = 50;
    }else{
        bongaPoints = 0;
    }
    printf("%s %s %s PHONE NO: %d AWARDED %d BONGA POINTS. STAY WITH SAFARICOM. THE BETTER OPTION!", f_name, s_name, surname, phone_no, bongaPoints);
    printf("\n");
}