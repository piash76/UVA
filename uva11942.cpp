#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,d,j,cnt=0,k,l;
    int a[10],b[10],c[10];

    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(j=1;j<=n;j++)
    {

        for(i=0;i<10;i++)
        {
            cin>>a[i];
        }

        for(k=0;k<10;k++)
        {
           b[k]=a[k];

        }

        sort(b,b+10);


        for(l=0;l<10;l++)
        {
            if(a[l]==b[l])
            {
                cnt++;
            }
        }



        if(cnt==10)
        {
            cout<<"Ordered"<<endl;
        }

        else
        {
            cout<<"Unordered"<<endl;
        }
    }
}
