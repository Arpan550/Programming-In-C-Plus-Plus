#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<"\n'"<<ch<<"' is an alphabet.";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout<<"\n'"<<ch<<"' is a digit.";
    }
    else 
    {
        cout<<"\n'"<<ch<<"' is a special character.";
    }
    return 0;
}
