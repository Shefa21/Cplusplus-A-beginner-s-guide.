#include<iostream>
using namespace std;
int main(){
  int t;
//loops from 0 to 9 , not 100
for(t=0;t<100;t++){
if(t==10)
  break;
cout<<t<<' ';
}
return 0;
}
