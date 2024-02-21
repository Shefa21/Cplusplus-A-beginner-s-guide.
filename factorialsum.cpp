#include<iostream>
using namespace std;
int main(){
  int sum=0;
int fact=1;
for(int i=1;i<=5;i++){
sum+=i;
fact*=i;
}
//but i is not known here
cout<<"sum is "<<sum<<endl;
cout<<"factorial is "<<fact;
return 0;
}
