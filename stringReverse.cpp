//reverse a string in place
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[]="this is a test";
    char *start, *end;
    int len;
    char t;

    cout<<"original: "<<str<<"\n";
    len=strlen(str);
    start=str;
    end=&str[len-1];

    while(start<end)
    {
//swap chars
        t=*start;
        *start = *end;
        *end =t;

//advance pointers
        start++;
        end--;
    }
    cout<<"Reversed : " << str<<"\n";
    return 0;
}
