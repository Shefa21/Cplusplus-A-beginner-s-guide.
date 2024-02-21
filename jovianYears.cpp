//a year in jupiter takes about 12 earth years. write a program that converts Jovian years to Earth years. Have the user specify the number of Jovian years. Allow fractional years.
#include<iostream>
using namespace std;
int main()
{
    double y;
    cout<<"enter jovian years"<<endl;
    cin>>y;
    cout<<y*12<<" earth years"<<endl;
    return 0;

}
