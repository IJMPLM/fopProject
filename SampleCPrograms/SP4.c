#include <stdio.h>
#include <conio.h>
int main()
{
 float C,F;

 clrscr();
 printf("Enter Temperature in Farenheit (F): ");
 scanf("%f",&F);
 C=(5/9.0)*(F-32);
 printf("The Temperature in Celsius (C) is %0.2f\n",C);
 getch();
 return(0);
}