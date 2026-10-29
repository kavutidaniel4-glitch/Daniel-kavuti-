//Name:Danikavuti 
//Reg No.CT100/G/30715/26

#include <stdio.h>
float calculate_discount(float purchase_amount);
int main () {

float discount_amount ,final_amount_payable ,purchase_amount ;
printf ("Enter the purchase amount ");
scanf (" %f",& purchase_amount );

discount_amount=calculate_discount (purchase_amount) ;
printf ("discount=%.2f\n",discount_amount);
final_amount_payable=purchase_amount-discount_amount;
printf ("final_amount_payable=%.2f\n",final_amount_payable);
return 0;
}

float calculate_discount(float purchase_amount ) {
if (purchase_amount <5000){
return 0.05*purchase_amount ;
}
else if(purchase_amount >=5000 && purchase_amount<=9999){
return 0.1*purchase_amount;}
else if (purchase_amount >=10000){
return 0.15*purchase_amount;
}
return 0 ;
}
