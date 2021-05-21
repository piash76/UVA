#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,d,j,cnt1=0,cnt2=0;
    int a[10];

    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    for(j=1;j<=n;j++)
    {

        for(i=0;i<10;i++)
        {
            cin>>a[i];
        }
        for(k=0;k<9;k++)
        {
            if(a[k]>a[k+1])
            {
                cnt1++;
            }
            else if(a[k]<a[k+1])
            {
                cnt2++
            }
        }
        if(cnt1==9)
        {
            cout<<"Ordered"<<endl;
        }
        else if(cnt2==9)
        {
             cout<<"Ordered"<<endl;
        }
        else
        {
             cout<<"Unordered"<<endl;
        }
    }
}

