#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,i,r,j=1;
    while(1)
    {
        cin>>n;
        int x[n];
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cin>>x[i];
                if(x[i]==0)
                {
                    b++;
                }
                else
                {
                    a++;
                }
            }
        }
        r=a-b;
        cout<<"Case "<<j<<": "<<r<<endl;
        j++;
        a=0;
        b=0;
    }
}
