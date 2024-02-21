#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int magic;
    int guess;

    magic = rand();
    cout<<"enter a guess"<<endl;
    cin>>guess;
    if(guess== magic)
    {
        cout<< "right"<<endl;
    }
    else
    {
        cout<<"wrong"<<endl;
    }
    cout<<"magic number was : "<<magic<<endl;

    return 0;
}
