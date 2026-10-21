#include<stdio.h>
int main(){
int balance =2000;
int withdrawal;
while (balance>0){
printf("\n balance_in_ksh: %d\n\n" ,balance);
printf("Enter_amount_you_to_withdraw:\t" );
scanf("%d",&withdrawal);
if (withdrawal>0 && withdrawal <=balance){
balance=balance-withdrawal;
printf("withdrawal_successfull✅\n\n" );
}else {
printf("insufficient_funds❌\n\n");
}
}
printf("balance_in_ksh%d\n\n",balance);
printf("insufficient_funds");
    return 0;
}