

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

ll max_node;

ll solve(ll node,ll bal)  ///
{
   ll left_node=2*node,right_node=(2*node)+1;
   if(left_node>max_node or right_node>max_node) return node;
   else
   {
       if(bal%2) return solve(left_node,(bal/2)+1);
       else return solve(right_node,bal/2);
   }
}




int main()
{

    ll t,i,j;
    while(scanf("%lld",&t)!=EOF)
    {

    if(t==-1) break;

    while(t--)
    {
        ll d,k;scanf("%lld %lld",&d,&k);

         max_node=(1<<d)-1;
         ///max_node=pow(2,d);

        ll ans=solve(1,k); ///node,ball;

        printf("%lld\n",ans);



    }

    }

    return 0;

}

/*

5
4 2
3 4
10 1
2 2
8 128
-1


*/



