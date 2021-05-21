#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,x,y,z,r;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }
        if(a<b)
        {

        x=(40-b+a);
        }
        else
        {
            x=a-b;
        }

         if(b>c)
        {

        y=(40-b+c);
        }
        else
        {
            y=c-b;
        }
         if(c<d)
        {

        z=(40-d+c);
        }
        else
        {
            z=c-d;
        }
    r=1080+((x+y+z)*9);
    cout<<r<<endl;

    }

}
