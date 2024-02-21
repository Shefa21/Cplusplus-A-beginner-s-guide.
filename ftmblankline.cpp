//convert feet(1ft to 100ft) to meters and print a blank line every tenth line
#include<iostream>
using namespace std;
int main()
{
    double f;
    double m;
    int i;//counter
    i=0;
    for(f=0.0; f<=100; f++)
    {
        m=f/3.28;
        cout<<f<<" feet is "<<m<<" meters "<<endl;
        i++;

        if(i==10)
        {
            cout<<"\n";
            i=0;
        }
    }
    return 0;

}
