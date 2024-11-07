#include<stdio.h>

#include<math.h>

int main(){

float  hours,wage,gross_pay,taxes,net_pay;

printf("Enter hours worked in a week",hours);

scanf("%f",&hours);

printf("Enter hourly wage",wage);

scanf("%f",&wage);  

if(hours>40){

float overtime_hours=hours-40;

float overtime_pay=overtime_hours*wage;

float normal_pay=hours*wage;

gross_pay=overtime_pay+normal_pay;

}

else{

gross_pay=hours*wage;

}

if(gross_pay<=600){

taxes=gross_pay*0.15;

}

else{

taxes=(gross_pay*0.15)+(gross_pay-600)*0.2;

}

net_pay=gross_pay-taxes;

printf("Gross_pay:$%.2f\n",gross_pay);

printf("Taxes:$%.2f\n",taxes);

printf("Net_pay:$%.2f\n",net_pay);

return 0;

}