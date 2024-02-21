//The moon's gravity is about 17 percent that of Earth's . Write a program that displays a table that shows Earth pounds and their equivalent moon weight. Have the table run from 1 to 100 pounds.Output a newline every 25 pounds.
#include <iostream>
#include<cstdlib>

using namespace std;

int main()

{
    int i=0;
    for(int e=0;e<=100;e++){
        cout<<"for earth's "<<e<<" pounds "<<" moon's weight is "<< e*.75*9.8<<endl;

        if(e!=0 && e%25==0){
            cout<<"\n"<<endl;
        }

    }
    return 0;
}
