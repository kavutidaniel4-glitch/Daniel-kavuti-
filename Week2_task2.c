//Name: Daniel kavuti 
//Reg no:CT100/G/30715/26

#include<stdio.h>

int main(){
//declare and initialize varriables 
char grade='A'; //% c;
char name[7] ={"Daniel"}; //% s;
int age = 17;//% d;
float marks=86;//% f;
double pi =3.142;//% of;

printf("Enter your grade \t");
scanf("%c",&grade);

printf("Enter your name\t");
scanf("%s",name);

printf("Enter your age\t");
scanf ("%d",&age);

printf("Enter your marks\t");
scanf ("%f",&marks);

printf("Enter the pi\t");
scanf("%lf",&pi);

printf("My grade is %c\n",grade);
printf ("My name is %s\n",name);
printf ("I am %d years old\n",age);
printf ("I scored%.1f marks\n",marks);
printf("The value of pi is %.2lf\n",pi);
    return 0;
}
