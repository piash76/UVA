#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    long long i,j,s=0,n,t,c=0,k,a;
    cin>>t;
    while(t--)
    {
        s=0;
        c=0;
        k=1;
        cin>>a;
        while(1)
        {
           s+=k;
           k++;
           if(s>a)
           {
               break;
           }
           c++;
        }

        cout<<c<<endl;
    }
}
