#include<stdio.h>
int main(){
float revenue[7];
float total=0,average;
int i;
for(i=0;i<7;i++){
printf("Enter revenue %d:",i+1);
scanf("%f",& revenue[i]);
total=total+revenue[i];
}
printf("seven daily revenue:\n");
for(i=0;i<7;i++){
printf("revenue%d=ksh%.2f\n",i+1,revenue[i]);
}
average=total/7;
printf("\nTotal_weekly_revenue=ksh%.2f\n",total);
printf("\naverage_daily_revenue=ksh%.2f\n",average);
    return 0;
}