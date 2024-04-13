1. Constructors cannot be overloaded. True or false?
  False. Constructors can indeed be overloaded in C++. Overloading allows multiple constructors to exist with different parameter lists.
2. When an object is passed by value to a function, a copy is made. Is this copy destroyed when the
function returns?
  Yes, when an object is passed by value to a function, a copy is made. This copy exists within the function scope and is 
destroyed when the function returns.
3. When an object is returned by a function, a temporary object is created that contains the return
value. True or false?
  True. When an object is returned by a function, a temporary object is created to hold the return value before being copied
or moved to the calling code.
1. When the default copy constructor is used, how is a copy of an object made?
  When the default copy constructor is used, a member-wise copy of the object's data members is performed to create a copy of the object.
2. A copy constructor is called when one object is assigned to another. True or false?
  True. A copy constructor is called when one object is assigned to another in C++.
3. Why might you need to explicitly define a copy constructor for a class?
  You might need to explicitly define a copy constructor for a class if the default copy constructor provided
by the compiler does not correctly handle deep copies, resource management, or if you need custom behavior during copying.
1. What is a friend function? What keyword declares one?
  A friend function is a function that is not a member of a class but has access to the class's private and protected members.
  The friend keyword declares a function as a friend of a class.
2. Is a friend function called on an object using the dot operator?
No, a friend function is not called on an object using the dot operator.
Instead, it is called like any other function, without any object reference.
3. Can a friend of one class be a member of another?
  Yes, a friend of one class can indeed be a member of another class. Friendship is not transitive, 
  so being a friend of one class does not automatically 
make a function a friend of another class.
1. Can a struct contain member functions?
  No, a struct cannot contain member functions in C++. Only classes can have member functions.
2. What is the defining characteristic of a union?
The defining characteristic of a union is that it can hold data of different types in the same memory location. 
  However, only one of its members can be active at any given time.
3. To what does this refer?
  "this" refers to a pointer to the current instance of the class. 
  It is used to access the members of the current object within member functions.
1.Operators must be overloaded relative to a class. True or false?
  True. Operators must be overloaded relative to a class in C++.
2. How many parameters does a member operator function have for a binary operator?
  A member operator function for a binary operator typically has one explicit parameter, as the left operand is implicitly
the object on which the member function is called.
3. For a binary member operator function, the left operand is passed via ______.
  For a binary member operator function, the left operand is passed via the implicit this pointer.
1.How many parameters does a nonmember binary operator function have?
A nonmember binary operator function typically has two parameters: one for the left operand and one for the right operand.
2. When using a nonmember operator function to overload the ++ operator, how must the
operand be passed?
  When using a nonmember operator function to overload the ++ operator, the operand must be passed explicitly as a parameter.
3. One advantage to using friend operator functions is that it allows a built-in type (such as int) to
be used as the left operand. True or false?
False. Friend operator functions do not provide any special ability to use built-in types as the left operand. 
The ability to use built-in types as the left operand is primarily controlled by the operator overloading syntax 
and the nature of the operator itself.
