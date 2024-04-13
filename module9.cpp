1. What is a copy constructor and when is it called? Show the general form of a copy constructor.
  A copy constructor makes a copy of an object. It is called when one object initializes another.
  Here is a general form:
classname(const classname &name)
  {
   //body of constructor
}
2. Explain what happens when an object is returned by a function. Specifically, when is its destructor
called?
  When an object is returned by a function, a temporary object is created as the return value. This
object is destroyed by the object’s destructor after the value has been returned
3. Given this class:
 class T{
  int i,j;
  public:
  int sum(){
   return i+j;
  }
};
show how to rewrite sum( ) so that it uses this.
  int sum(){
return this.i+this.j;
}
4. What is a structure? What is a union?
A structure is a class in which members are public by default. A union is a class in which all data
members share the same memory. Union members are also public by default.
5. Inside a member function, to what does *this refer?
  *this refers to the object on which the function was called.
6. What is a friend function?
  A friend function is a nonmember function that is granted access to the private members of the
class for which it is a friend.
7. Show the general form used for overloading a binary member operator function.
type classname::operator#(type op2)
{
//left operand passed via "this"
}
8. To allow operations involving a class type and a built-in type, what must you do?
  To allow operations between a class type and a built-in type, you must use two friend operator
functions, one with the class type as the first parameter, and one with the built-in type as the
first parameter.
9. Can the ? be overloaded? Can you change the precedence of an operator?
  No, the ? cannot be overloaded. No, you cannot change the precedence of an operator
10. For the Set class developed in Project 9-1, define < and > so that they determine if one set is a
subset or a superset of another set. Have < return true if the left set is a subset of the set on the
right, and false otherwise. Have > return true if the left set is a superset of the set on the right, and
false otherwise.
  //determine if one set is a subset of another
  bool Set::operator<(Set ob2){
  if(len>ob2.len)
  return false;//ob1 has more elements
for(int i=0;i<len;i++)
if(ob2.find(members[i])==-1)
return false;
return true;
}

//determine if one set is a superset of another
 bool Set::operator>(Set ob2){
  if(len<ob2.len)
  return false;//ob1 has fewer elements
for(int i=0;i<ob2.len;i++)
if(find(ob2.members[i])==-1)
return false;
return true;
}


11. For the Set class, define the & so that it yields the intersection of two sets.
//Set intersection
Set Set::operator &(Set ob2){
Set newset;
//Add elements common to both sets
for(int i=0;i<len;i++)
  if(ob2.find(members[i])!=-1)//add if elements in both sets
    newset=newset+members[i];
return newset;//return set
}

    
12. On your own, try adding other Set operators. For example, try defining | so that it yields the
symmetric difference between two sets. The symmetric difference consists of those elements that
the two sets do not have in common.
// Set symmetric difference
Set Set::operator|(Set ob2) {
    Set newset;
    // Add elements from *this that are not in ob2
    for (int i = 0; i < len; i++)
        if (ob2.find(members[i]) == -1)
            newset = newset + members[i];
    // Add elements from ob2 that are not in *this
    for (int i = 0; i < ob2.len; i++)
        if (find(ob2.members[i]) == -1)
            newset = newset + ob2.members[i];
    return newset;
}
With this operator defined, you can now perform operations like Set result = set1 | set2; to obtain the symmetric difference between set1 and set2.
