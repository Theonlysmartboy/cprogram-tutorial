#include<stdio.h>
static char make[60], model[60], engine_no[60];
static float sale_price;
void set_vehicle(char make[60], char model[60], char engine_no[60],float sale_price){
    make = make;
    model = model;
    engine_no = engine_no;
    sale_price = sale_price;
}

float get_profit( void){
float profit;
profit = 0.15 * sale_price;
return sale_price;

}
int main(){
    set_vehicle("Subaru", "Forester", "xyz-1", 1005000);
    printf("Profit Made: %f", get_profit());
return 0;
}


