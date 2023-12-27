#include <stdio.h>
#include <conio.h>
int main()
{
 int X1,X2,SUM;

 printf("Enter 2 integer values: ");
 scanf("%d%d",&X1,&X2);
 SUM=X1+X2;
 printf("The Sum of %d and %d is %d\n",X1,X2,SUM);
 getch(); //pause
 return(0);
}