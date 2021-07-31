
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

const ll inf=1e18;
const int mod=1e9+7;
const int mod2=2147483647; ///2^31-1

const int N=500005;
ll a[N];


int main()
{

    ll t,i,j,k;

    ll no,dim;

    while(scanf("%lld %lld",&no,&dim)!=EOF)
    {
        vector< pair<vector<ll>,ll> >v;

        for(i=0;i<no;i++)
        {
            vector<ll> tmp;
            for(j=0;j<dim;j++)
            {
                ll x;scanf("%lld",&x);
               //cout<<"X "<<x<<endl;
                tmp.push_back(x);
            }
            sort(tmp.begin(),tmp.end());

            v.push_back({tmp,i+1});


        }

        sort(v.begin(),v.end());


        vector<pll> dp(no);  ///val,idx

        for(i=0;i<no;i++)
        {
           dp[i].ff=1;
            dp[i].ss=v[i].ss;
        }

        dp[0].ff=1;
       dp[0].ss=v[0].ss;




        for(i=1;i<no;i++)
        {
            for(j=0;j<i;j++)
            {
                ///if(a[j]<a[i])
                bool f=true;

                for(k=0;k<dim;k++)
                {
                    if(v[i].ff[k]<=v[j].ff[k])
                    {
                        f=false;break;
                    }
                }

                if(f and dp[i].ff<dp[j].ff+1)
                {
                    dp[i].ff=dp[j].ff+1;
                }
            }
        }

        ll prev_lis_idx,lis=0;
        for(i=0;i<no;i++)
        {
            if(lis<dp[i].ff)
            {
                lis=dp[i].ff;
                prev_lis_idx=i;
            }

          ///  cout<<"dp[i].ff "<<dp[i].ff<<" ";
        }
       /// cout<<endl;

        ///cout<<"LIS "<<lis<<endl;

        printf("%lld\n",lis);

        vector<ll> s;
        s.push_back(dp[prev_lis_idx].ss);

        ll lis_val=lis-1;

        for(i=prev_lis_idx-1;i>=0;i--)
        {
            if(dp[i].ff==lis_val)
            {

            bool f=true;

            for(j=0;j<dim;j++)
            {
                if(v[prev_lis_idx].ff[j]<=v[i].ff[j])
                {
                    f=false;break;
                }
            }

            if(f)
            {
                s.push_back(dp[i].ss);
                prev_lis_idx=i;
                lis_val--;
            }

            }

        }

        reverse(s.begin(),s.end());

        ll id=0;
        for(auto it:s)
        {
            if(id!=0) printf(" ");
            printf("%lld",it);
            id++;
        }

        printf("\n");





    }

    return 0;

}


/*

5 2
3 7
8 10
5 2
9 11
21 18
8 6
5 2 20 1 30 10
23 15 7 9 11 3
40 50 34 24 14 4
9 10 11 12 13 14
31 4 18 8 27 17
44 32 13 19 41 19
1 2 3 4 5 6
80 37 47 18 21 9


*/




