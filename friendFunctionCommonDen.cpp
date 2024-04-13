#include<iostream>
using namespace std;

class MyClass{
int a,b;
public:
MyClass(int i,int j){a=i;b=j;}
friend int comDenom(MyClass X);//comDenom() is a friend of MyClass
};
//Notice that comDenom() is not a member function of any class
{
//because comDenom() is a friend of MyClass it can directly access a and b
int max=x.a > x.b ? x.a : x.b;

for(int i=2;i<=max;i++)
  if((x.a%i)==0 && (x.b%i)==0) return i;
return 0;
}
int main()
{
  MyClass n(18,111);
if(comDenom(n))//comDenom() is called normally without the use of an object or the dot operator
  cout<<"Common denominator is : "<< comDenom(n)<<"\n";
else 
cout<<"No common denominator. \n";

return 0;
}
