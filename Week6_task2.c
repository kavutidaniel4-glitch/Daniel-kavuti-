#include<stdio.h>
int main()
{
int occupancy[5][10];
int floor, room;
int occupied, vaccant;
for (floor=0;floor<5;floor++)
{
printf("Enter occupancy floor%d\n", floor+1);
for(room=0;room<10;room++)
{
printf("Room %d (1=occupied, 0=vacant): ", room+1);
scanf("%d", & occupancy[floor][room]);
}
}
printf("-------room occupancy report-------\n");
for(floor=0;floor<5;floor++)
{
occupied=0;
vaccant=0;
for(room=0;room<10;room++)
{
if(occupancy[floor][room]==1)
{
occupied++;
}
else
{
vaccant++;
}
}
printf("\nfloor %d\n",floor+1);
printf("occupied room: %d\n", occupied);
printf("vacant room: %d \n",vaccant);
}
return 0;
}