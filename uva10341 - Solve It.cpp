
#include<bits/stdc++.h>

#define ll long long



using namespace std;



ll p,q,r,s,t,u;


int main()
{


    while(scanf("%lld %lld %lld %lld %lld %lld",&p,&q,&r,&s,&t,&u)!=EOF)
    {


        double lo=0.0,hi=1.0;

        ll iteration=0;

        double ans=-1;

        while(iteration<=100)
        {
            double mid=(lo+hi)/2.0; ///possible x

            double f=p*exp(-mid)+ q*sin(mid) + r*cos(mid) + s*tan(mid) + t*mid*mid + u; ///monotonically decreasing



            if(f>0)
            {
                ///f er value komano drkr so x er value or mid barano dorkar
                lo=mid;

            }
            else
            {
                ans=mid;
                hi=mid;
            }


          iteration++;
        }

        //cout<<"ANS "<<ans<<endl;

        double f0=p*exp(0)+ q*sin(0) + r*cos(0) + s*tan(0) + t*0*0 + u;
        //cout<<f2<<endl;


        double f1=p*exp(-1)+ q*sin(1) + r*cos(1) + s*tan(1) + t*1*1 + u;
       /// cout<<f2<<endl;

        //cout<<0<<endl;

       if(f0*f1>0) printf("No solution\n");
       else   printf("%.4f\n",ans);




    }

    return 0;

}

/*

0 0 0 0 -2 1
1 0 0 0 -1 2
1 -1 1 -1 -1 1

0 0 0 0 0 -1

0 0 0 0 1 -1
*/



