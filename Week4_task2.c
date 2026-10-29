
//Name: Daniel kavuti 
//Reg:CT1000/G/30715/26
#include<stdio.h>
int main(){
int number;
while(1){
printf("Enter a guess number:\t");
scanf("%d",& number);

if(number>=1 && number <=20){
printf("congratulations!\n");
break;
}
else if(number<1){
printf("Too low!\n");
}
else if(number>20){
printf("Too high!\n");
}
}
    return 0;
}
