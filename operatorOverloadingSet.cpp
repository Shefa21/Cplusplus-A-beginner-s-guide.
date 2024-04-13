#include<iostream>
using namespace std;
const int MaxSize =100;
class Set{
int len;//number of members
char members[MaxSize];//this array holds the set
//the find()function is private because it is not used outside the set class
int find(char ch);
public:
//construct a null set
Set(){len=0;}
//return the number of elements in the set
int getLength(){
  return len;
}
void showset();//display the set
bool isMember(char ch);//check for membership
Set operator +(char ch);//add an element
Set operator -(char ch);//remove an element

Set operator +(Set ob2);//set union
Set operator -(Set ob2);//set difference

};
//return the index of the element
int Set::find(char ch){
  int i;
for(int i=0;i<len;i++)
  if(members[i]==ch)return i;
return -1;
}
//show the set
void Set::showSet)=(){
cout<<"{";
for(int i=0;i<len;i++)
  cout<<members[i];
cout<<"}\n";
}
bool Set::isMember(char ch){
  if(find(ch)!=-1)return true;
return false;
}
Set Set::operator+(char ch){
  Set newset;
if(len==MaxSize){
cout<<"set is full";
return *this;//return existing set

}
newset = *this;//duplicate existing set
//see if element already exists
if(find(ch)==-1){//is not found, then add
//add new element to new set
newset.members[newset.len]=ch;
newset.len++;
}
return newset;//return updated set
}
//remove an element from the set
Set Set::operator-(char ch){
  Set newset;
int i= find(ch);//i will be -1 if element not found
//copy and compare the remaining elements
for(int j=0;j<len;j++)
  if(j!=i)
    newset=newset+members[j];
return newset;
}
//set union




