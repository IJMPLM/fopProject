#include <stdio.h>
#include <conio.h>
int main()
{
  int Q1,Q2,Q3;
  float AveQz;

  clrscr();
  printf("Enter 3 quiz scores: ");
  scanf("%d%d%d",&Q1,&Q2,&Q3);
  AveQz=(Q1+Q2+Q3)/3.0;
  printf("The Average of 3 Quizzes is %0.2f\n",AveQz);
  getch();
  return(0);
}
