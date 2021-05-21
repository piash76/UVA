#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,t,i=0,j=0,k,m=1;
    string a[17]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"},b[105];
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    if(n>16)
    {
        m=ceil(n/16)+1;
    }
    for(k=0;k<m*16;k++,i++,j++)
    {
        if(j==n)
        {
            j=0;
        }
        if(i==16)
        {
            i=0;
        }

        cout<<b[j]<<": "<<a[i]<<endl;

    }



}
