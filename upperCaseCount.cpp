#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{

    char str[80];
    int i;
    int count;
    strcpy(str,"This is a test");
    count=0;
    for(i=0; i<str[i]; i++)
    {
        if(isupper(str[i]))
        {
            count++;
        }
    }
    cout<<str<<" contains "<<count<<" uppercase letters";

    return 0;
}












