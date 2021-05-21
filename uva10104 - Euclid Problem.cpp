
///https://www.youtube.com/watch?v=jhqFJe6-Cnk

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll xGCD(ll a,ll b,ll &x,ll &y) ///gcd(a,b)=ax+by ;(x,y) smallest pair where x<=y
{
    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }

    ll x1, y1, gcd = xGCD(b, a % b, x1, y1);
   // cout<<"a "<<a<<" b "<<b<<endl;
    //cout<<"X1 "<<x1<<endl;
   // cout<<"Y1 "<<y1<<endl;
    x = y1;
    y = x1 - (a / b) * y1;
  //  cout<<"X "<<x<<endl;
    //cout<<"Y "<<y<<endl;


    return gcd;
}


int main()
{

    ll a,b;
    while(cin>>a>>b)
    {
        ll x,y;
        ll g=xGCD(a,b,x,y);

        cout<<x<<" "<<y<<" "<<g<<endl;
        //cout<<xGCD(a,b,x,y)<<endl;
    }


}

