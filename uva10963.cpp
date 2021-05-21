#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j=0,flag=0,a,b,r,x,d;
    cin>>t;

    cout<<endl;
    while(t--)
    {
        cin>>x;
        cin>>a>>b;
        d=abs(a-b);
        for(i=1;i<=(x-1);i++)
        {
            cin>>a>>b;
            r=abs(a-b);
            if(d!=r)
            {
                flag=1;
            }
        }


    if(flag==0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<endl;
    }

    cout<<endl;



    }
}

