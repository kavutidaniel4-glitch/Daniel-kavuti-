#include <stdio.h>
//Name:Daniel kavuti
//Reg no:CT100/G/30715/26
float calculate_tax(float gross_salary);
int main (){


float gross_salary;
float tax;
float net_salary;

printf("Enter the employees gross salary= " );
scanf("%f",& gross_salary);
tax=calculate_tax(gross_salary);
net_salary= gross_salary- tax;

printf("tax=%.2f\n" ,tax);
printf("net_salary =%.2f\n" ,net_salary);
return 0 ;
}
float calculate_tax(float gross_salary){
float tax;

if (gross_salary <30000){
tax=0.05*gross_salary;
}
else if (gross_salary >=30000 && gross_salary<=59999){
tax=0.1*gross_salary;
}
else if(gross_salary>=60000){
tax =0.15*gross_salary;
}
return tax;
}

    
