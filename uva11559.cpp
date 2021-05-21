#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,h,w,s=0,t,i,j,k,p,cnt=0,m=0,g,r,bed;

    while(cin>>n>>b>>h>>w)
    {

     int y[10000]={0};
    for(i=1;i<=h;i++)
    {
        cin>>p;
        for(j=1;j<=w;j++)
        {
            cin>>bed;
            if(bed>=n)
            {
            s=(n*p);
            if(s<=b)
            {
            y[m]=s;
            m++;
            }

            }
        }


    }
    r=y[0];
    for(g=1;g<m;g++)
    {
        if(y[g]<r)
        {
            r=y[g];
        }
    }

    if(r==0)
    {
        cout<<"stay home"<<endl;
    }
    else
    {
        cout<<r<<endl;
    }

    m=0;

    }

}
