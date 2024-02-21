//the program reads characters from the user until a period (.) is entered. It converts letters to their opposite case and counts the total number of changes, printing the modified characters and the count at the end. The program continues to prompt the user for input until a period is entered.



#include<iostream>
using namespace std;

int main()
{
    char ch;
    int changes=0;
    cout<<"enter period to stop"<<endl;
    do
    {
        cin>>ch;
        if(ch >= 'a'&& ch<='z')
        {
            ch-=(char)32;
            changes++;
            cout<<ch;
        }


        else if(ch>='A' && ch<='Z')
        {
            ch+=(char)32;
            changes++;
            cout<<ch;
        }
    }
    while(ch!='.');
    cout<<changes<<endl;
    return 0;




}

