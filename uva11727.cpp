#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a[3],i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[j];
        }
        sort(a,a+3);
        cout<<"Case "<<i<<": ";
        cout<<a[1]<<endl;

    }
}
