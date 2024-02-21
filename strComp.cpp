#include <iostream>
#include<cctype>
using namespace std;

int main()
{

    char str1[80];
    char str2[80];//two character arrays str1 and str2 to store the user-inputted strings.
    char *p1, *p2;//Pointers p1 and p2 are initialized to the beginning of str1 and str2 respectively.

    cout<<"Enter first string"<<endl;
    cin>>str1;

    cout<<"Enter second string"<<endl;

    cin>>str2;
    p1=str1;
    p2=str2;
    //loop as long as p1 and p2 point to non null characters
    while(*p1 && *p2)
    {
        if(tolower(*p1)!=tolower(*p2))//Inside the loop, the characters pointed to by p1 and p2 are compared after converting them to lowercase using tolower to ignore case differences.
        {
            break;//If a mismatch is found, the loop is exited using break.
        }
        else
        {
            p1++;
            p2++;
        }
    }
    //If the loop completes without a mismatch, the program checks if both p1 and p2 point to null terminators (!*p1 && !*p2), indicating the end of both strings. If true, it prints that the strings are the same except for possible case differences.

    //strings are same if both p1 and p2 point to null terminator
    if(!*p1 && !*p2)
    {
        cout<<"Strings are same except for possible case differences "<<endl;
    }
    else//If the loop is exited due to a mismatch or if the null terminator condition is not met, it prints that the strings differ.
    {
        cout<<"Strings differ"<<endl;
    }

    return 0;
}












