#include<iostream>
using namespace std;

int main()
{
    int len;
    cout<<"enter length"<<endl;
        cin>>len;
    while(len>0 && len<80)
    {
        cout<<'.';
        len--;
    }
    return 0;
}
