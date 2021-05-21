#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,d,n,j,ans,c=0;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        c=1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        a[0]=0;
        for(i=1;i<=n;i++)
        {
           if(a[i]-a[i-1]>d)
           {
               d=a[i]-a[i-1];
           }

        }
        ans=d;
        for(i=1;i<=n;i++)
        {
            if(a[i]-a[i-1]==d)
            {
               c++;
            }

        }
        if(c>1)
        {
            ans+=1;
        }




        cout<<"Case "<<j<<": "<<ans<<endl;
    }
}
