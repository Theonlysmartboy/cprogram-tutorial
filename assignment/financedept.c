#include<stdio.h>

void employee(int id_no, char f_name[60], char s_name[60], char surname[60], char gender, char dob[60], int salary);
int main()
{
   int id_no, salary;
   char f_name[60], s_name[60], surname[60], gender, dob[60];
    printf("ENTER ID NUMBER:");
    scanf("%d", &id_no);
     printf("ENTER FIRST NAME:");
    scanf("%s", f_name);
     printf("ENTER SECOND NAME:");
    scanf("%s", s_name);
     printf("ENTER SUR NAME:");
    scanf("%s", surname);
    printf("ENTER GENDER <M OR F > :");
    scanf("%c", &gender);
    printf("ENTER DATE OF BIRTH <DD-MM-YYY> :");
    scanf("%s", dob);
    printf("ENTER BASIC SALARY IN KSH:");
    scanf("%d", &salary);
    employee(id_no, f_name, s_name, surname, gender, dob, salary);
    return 0;
}
void employee(int id_no, char f_name[60], char s_name[60], char surname[60], char gender, char dob[60], int salary)
{
    printf("**********EMPLOYEE DETAILS***********\n\n");
    printf("ID NUMBER: %d", id_no);
    printf("\n");
    printf("FIRST NAME: %s", f_name);
    printf("\n");
    printf("SECOND NAME: %s", s_name);
    printf("\n");
    printf("SURNAME: %s", surname);
    printf("\n");
    printf("GENDER: %c", gender);
    printf("\n");
    printf("DATE OF BIRTH: %s", dob);
    printf("\n");
    printf("BASIC SALARY: %d", &salary);
}