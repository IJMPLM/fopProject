#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 float C,F;

 cout<<"Enter Temperature in Farenheit (F): ";
 cin>>F;
 C=(5/9.0)*(F-32);
 cout<<"The Temperature in Celsius (C) is ";
 cout<<setprecision(2)<<fixed<<C<<endl;

 return 0;
}