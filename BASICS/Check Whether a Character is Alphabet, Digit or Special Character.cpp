#include <iostream>
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<<<"\n'"ch<<"' is alphabet."
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout<<<<"\n'"ch<<"' is digit."
    }
    else 
    {
        cout<<<<"\n'"ch<<"' is special character."
    }
    return 0;
}
