#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int i,s=0,t,d;
    string a="donate",b;
    cin>>t;
    while(t--)
    {
        cin>>b;
        if(a==b)
        {
            cin>>d;
            s=s+d;
        }
        else
        {
            cout<<s<<endl;
        }
    }
}
