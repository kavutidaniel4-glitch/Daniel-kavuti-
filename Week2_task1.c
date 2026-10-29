//Data types and varriables 
//Name: Daniel kavuti 
//Reg no:CT100/G/30715/26
 #include<stdio.h>
int main(){

float height ;
float radius ;
double pi  =3.142;
float volume ;
float surface_area;

printf("Enter the height:\t");
scanf("%f",&height);

printf ("Enter the radius:\t");
scanf ("%f",&radius);

volume =pi*radius*radius*height ;
surface_area=pi*radius*radius + 2*pi*radius*height ;

printf ("Find the volume:\t%f\n",volume);
printf ("Find the surface_area:\t%f\n",surface_area);

return 0 ;
}
    
