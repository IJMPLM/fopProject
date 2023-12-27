#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int Q1,Q2,Q3;
  float AveQz;

  cout<<"Enter 3 quiz scores: ";
  cin>>Q1>>Q2>>Q3;
  AveQz=(Q1+Q2+Q3)/3.0;
  cout<<"The Average of 3 Quizzes is ";
  cout<<setprecision(2)<<fixed<<AveQz<<endl;

  return 0;
}
