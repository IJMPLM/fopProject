#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
  float R,VS;
  const float Pi=3.1416;

  clrscr();
  printf("Enter Radius of Sphere: ");
  scanf("%f",&R);
  VS=(4/3.0)*Pi*pow(R,3);
  printf("The Volume of Sphere is %0.2f\n",VS);
  getch();
  return(0);
}