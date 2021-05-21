#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int i=1;
    string a="Hajj",b="Umrah",c;
    while(1)
    {
        cin>>c;
        if(c=="*")
        {
            break;
        }
        if(c==a)
        {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
            i++;
        }
        else if(c==b)
        {
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
            i++;
        }
    }








}
