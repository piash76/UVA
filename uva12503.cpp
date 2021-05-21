#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t,i,j,r=0,n,d,b[105];
    string a;
    cin>>t;
    while(t--)
    {
        cin>>n;
       for(i=1;i<=n;i++)
        {
            cin>>a;
            if(a=="LEFT")
            {
                r--;
                b[i]=-1;
            }
            else if(a=="RIGHT")
            {
                r++;
                b[i]=1;
            }
            else
            {
                cin>>a>>d;

                r=r+b[d];
                b[i]=b[d];
            }
        }

        cout<<r<<endl;
        r=0;
        b[105]={0};
    }
}
