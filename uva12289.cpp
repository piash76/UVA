#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int i,n,l;
    string a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        l=a.length();
        if(l==5)
        {
            cout<<"3"<<endl;
        }
        else
        {
            if( (a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[2]=='e') || (a[1]=='n' && a[2]=='e') )
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
    }

}
