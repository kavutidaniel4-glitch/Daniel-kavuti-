#include<stdio.h>
int calculate_salary(int hours,int hourly_wage){
int weekly_salary;
weekly_salary=hours*hourly_wage*7;
}
int main(){
int hourly_wage;
int hours;
int weekly_salary;
printf("\nEnter the hours worked:\t");
scanf("%d",&hours);
printf("\nEnter the hourly_wage:\t");
scanf("%d" ,&hourly_wage);
weekly_salary=hourly_wage*hours*7;
printf("\nThe employee's weekly_salary: %d",weekly_salary);
return 0;
}