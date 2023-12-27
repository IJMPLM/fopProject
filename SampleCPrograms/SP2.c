#include <stdio.h>
#include <conio.h>
#include <math.h>
#define Pi 3.1416
int main()
{
 float R,Area;

 clrscr();
 printf("Enter Radius (R) of Circle: ");
 scanf("%f",&R);
 Area=Pi*pow(R,2);
 printf("The Area of the Circle with Radius of %0.2f is %0.4f\n",R,Area);
 getch();
 return(0);
}