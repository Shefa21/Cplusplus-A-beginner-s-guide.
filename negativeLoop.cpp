#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double num1;
    int num;
    for(num=100;num>=1;num--){
            num1 = sqrt((double)num);
        cout<<num<<" "<< num1<<endl;
    }
    return 0;
}
