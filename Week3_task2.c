
#include <stdio.h>
//Name:Danikavuti 
//Reg no.:CT100/G/30715/26
int main(){
float result;
float units;
float electricity_bill(float units);
printf("Enter the number of units consumed \t" );
scanf("%f",& units);
result=electricity_bill(units);
 printf("electricity_bill \t");
 printf("%.2f\n",result);
 
return 0 ;
}
float electricity_bill(float units)
{
float result;

if (units <=30){
result=units*20 ;
}
else if (units >=31 &&units <=60){
result=units*25;
}
else if(units >60){
result=units*30;
}
return result;
}



    