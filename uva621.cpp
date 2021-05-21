#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string a="1",b="4",c="78",x;
    int t,i,l;
    cin>>t;
    while(t--)
    {
        cin>>x;
        l=x.length();
        if(x==a || x==b || x==c)
        {
            cout<<"+"<<endl;
        }
        else if(x[l-1]=='5' && x[l-2]=='3')
        {
            cout<<"-"<<endl;
        }
        else if(x[0]=='9' && x[l-1]=='4')
        {
            cout<<"*"<<endl;
        }
        else if(x[0]=='1' && x[1]=='9' && x[2]=='0')
        {
            cout<<"?"<<endl;
        }
    }
}
