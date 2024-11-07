#include <stdio.h>
int main(){
    float hours_worked;
    float hourly_wage;
    float grossPay;
    float taxes;
    float netPay;
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);
    if (hours_worked > 40){
        grossPay = (40 * hourly_wage)+((hours_worked-40)*hourly_wage*1.5);
    }else {
        grossPay = hours_worked * hourly_wage;
    
    }
    if(grossPay<=600){
        taxes=grossPay*0.15;

    }else{
        taxes = (600*0.15)+((grossPay-600)*0.20);
    }
    netPay = grossPay - taxes;
    printf("Gross Pay: %.2f\n", grossPay);
    printf("Taxes: %f\n", taxes);
    printf("Net Pay: %f\n", netPay);
    return 0;


}