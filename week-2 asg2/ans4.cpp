#include <iostream>
#include <cmath>
using namespace std;



int main(){
    float radius,height,volume;
    cout << "Enter Radius : ";
    cin >> radius ;
    cout << "Enter Height : ";
    cin >> height ;
    volume = (M_PI*radius*radius)*height;
    cout << "volume of Cylinder :" << volume ;
    return 0;
}