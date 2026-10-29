//Name:Daniekavuti 
//Reg no:CT100/G/30715/26
#include <stdio.h>
float attendance, average_marks;
int main(){
float attendance ;
float average;

printf("Enter the attendance percentage=" );
scanf("%f",&attendance);

printf(" Enter the average marks=");
scanf(" %f", &average);


if(average >=40 && attendance >=75){
printf("eligible\n");
 }
 else{printf("not eligible\n");
}
return 0;
}
