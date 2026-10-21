#include<stdio.h>
#include<math.h>

int main()
{
float temperature;
float celcious;

    printf("Enter temperature in fahrenheit:\t");
    scanf("%f",&temperature);
    celcious=(temperature-32)*5/9;
    printf("temperature in celcious :%.2f\n",celcious);
    return 0;
}