#include<bits/stdc++.h>
using namespace std;

int sumdigit(int x)
{
    int t=x,s=0,r;
    while(t!=0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    return s;
}


int main()
{
    long long n,x,y,z;

    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            x=sumdigit(n);
            y=sumdigit(x);
            z=sumdigit(y);
            cout<<z<<endl;

        }
    }
}
