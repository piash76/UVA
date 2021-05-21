#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,a,b,x,y,r;

    while(1)
    {
        cin>>a>>b;
        if(a==-1 && b==-1)
        {
            break;
        }

        x=abs(a-b);
        y=100-b+a;
        r=min(x,y);
        cout<<r<<endl;

    }
    return 0;
}
