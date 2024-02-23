#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int i;
    char str[80];
    char numbers[10][80]=
    {
        "Tom","0183824",
        "Mary","8474748"

    };
    cout<<"Enter name: ";
    cin>>str;

    for(i=0; i<10; i+=2){
        if(!strcmp(str,numbers[i]))
        {
            cout<<"Numbers is "<<numbers[i+1]<<"\n";
            break;
        }
    if(i==10)
    {
        cout<<"Not found.\n";
        return 0;
    }
    }

}
