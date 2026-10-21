#include<stdio.h>
int main(){
int distance;
int total_fare;

printf("Enter the distance travelled in kilometres:\t");
scanf("%d",& distance);

total_fare=distance*50;
printf("total_fare:ksh\t%d",total_fare);
    return 0;
}