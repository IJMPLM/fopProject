#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  float R,VS;
  const float Pi=3.1416;

  cout<<"Enter Radius of Sphere: ";
  cin>>R;
  VS=(4/3.0)*Pi*pow(R,3);
  cout<<"The Volume of Sphere is ";
  cout<<setprecision(2)<<fixed<<VS<<endl;

  return 0;
}