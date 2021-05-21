#include<bits/stdc++.h>

using namespace std;

int main()
{
int x,c,d,e,f,i,j,k;
string s[100],g,h;
map<string,int>a;
k=1;
while(cin>>x)
    {
    for(i=1;i<=x;i++)
        {
        cin>>s[i];
        a[s[i]]=0;
        }
    for(i=1;i<=x;i++)
        {
        cin>>g;
        cin>>c>>d;
        if(d!=0)
        {
          e=c/d;
          f=e*d; //f=c

        for(j=1;j<=d;j++)
            {
            cin>>h;
            a[h]+=e;
            }
        a[g]-=f;
        }
        }
    if(k!=1) cout<<endl;
    for(i=1;i<=x;i++)
        {
        cout<<s[i]<<" "<<a[s[i]]<<endl;
        }
    k++;
    }
return 0;
}
