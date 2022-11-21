#include <stdio.h>
#include <math.h>
//#define pi 3.14

void main()
{
const float pi=3.14;
float rayon;
float surface;


printf("inserer le rayon du cercle\n");
scanf("%f",&rayon);
surface=pi*pow(rayon,2);
printf("la surface du cercle est %f\n",surface);
}
