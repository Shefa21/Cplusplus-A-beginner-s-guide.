//loop until a random number that is greater than 20000
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int r,i;
    for( i=0; i<=20000; i++)
    {
        r = rand();
    }
    cout<< r << "it was generated on try "<< i <<endl;

    return 0;
}
