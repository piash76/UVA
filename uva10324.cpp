#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
  char  a[1000015];
    int i,j,cnt=0,q,k,l,m,flag=0,temp;
    while(1)
    {
     m=1;
     flag=0;
    gets(a);
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cnt=0;
        cin>>j>>k;
        if(j>k)
        {
            temp=j;
            j=k;
            k=temp;
        }
        for(l=j;l<k;l++)
        {
            if(a[l]==a[l+1])
            {
                cnt++;
            }
        }

        if(flag==0)
        {

        cout<<"Case "<<m<<":"<<endl;
        m++;
        flag=1;
        }
        if(cnt==abs(j-k))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    }
}
