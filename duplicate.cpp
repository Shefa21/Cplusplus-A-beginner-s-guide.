//program that searches an array of ten integers for duplicate values. Have the program display each duplicate found
#include <iostream>
using namespace std;

int main() {

    int num[10];
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
    cout<<"duplicates: "<<endl;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(num[i]==num[j]){
                cout<<num[i]<<endl;

            //break;
            }
        }
    }

    return 0;
}

