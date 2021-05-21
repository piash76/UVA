#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,f,i,j,s,n,ef,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>f;
        for(i=1;i<=f;i++)
        {
            cin>>s>>n>>ef;
            sum=sum+(s*ef);
        }
        cout<<sum<<endl;
        sum=0;
    }

}
