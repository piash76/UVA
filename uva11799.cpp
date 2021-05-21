#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n,m,k;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        m=a[0];
        for(k=1;k<n;k++)
        {
            if(a[k]>m)
            {
                m=a[k];
            }
        }

        cout<<"Case "<<""<<j<<": "<<m<<endl;


    }





}
