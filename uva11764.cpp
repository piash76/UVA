#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,l=0,h=0,n,k;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(k=0;k<(n-1);k++)
        {
           if(a[k]<a[k+1])
           {
               h++;
           }
           if(a[k]>a[k+1])
           {
               l++;
           }
        }

        cout<<"Case "<<""<<j<<": "<<h<<" "<<l<<endl;
        l=0;
        h=0;
    }








}
