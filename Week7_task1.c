#include<stdio.h>
int calculate_bill(int units,int cost){
int total_bill;
total_bill=units*cost;
return total_bill;
}
int main(){
int cost;
int units;
int total_bill;
printf("Enter the number of units consumed:\t");
scanf("%d",& units);
printf("Enter the cost per unit:\t");
scanf("%d",& cost);
 total_bill= calculate_bill( units, cost);
printf("The total_bill:%d" ,total_bill);
    return 0;
}