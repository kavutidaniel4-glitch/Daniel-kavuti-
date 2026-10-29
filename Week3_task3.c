
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

if (units <=100){
result=units*10 ;
}
else if (units >100 &&units <=200){
result=units*15;
}
else if(units >200){
result=units*20;
}
return result;
}



    
