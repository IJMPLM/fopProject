#include <iostream>
#include <cmath>
#include <iomanip>
#define Pi 3.1416
using namespace std;
int main() {
 float R,Area;

 cout<<"Enter Radius (R) of Circle: ";
 cin>>R;
 Area=Pi*pow(R,2);
 cout<<"The Area of the Circle with Radius of ";
 cout<<setprecision(2)<<fixed<<R;
 cout<<" is ";
 cout<<setprecision(4)<<fixed<<Area<<endl;

 return 0;
}