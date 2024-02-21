#include<iostream>
using namespace std;
int main()
{
    bool b = true;
    cout<< "b is "<< b<<endl;
    b=false;
    cout<<" b is "<<b << endl;
    if(b)
    {
        cout<<"this is not executed"<<endl;
    }
    b= false;
    if(b)
    {
        cout<< " this is not executed"<<endl;
    }
    cout<< "10>9 is "<< (10>9)<< endl;
    return 0;
}
