#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    double p=0,c,s=0,d=0,h=0,m=0,se=0;
    char a[100];
    while(scanf("%s",a)!=EOF)
    {
        sscanf(a,"%lf:%lf:%lf",&h,&m,&se);
        c=h*3600+m*60+se;
        d+=(c-p)*(s/3600);
        char b;
        cin>>b;
        if(b==' ')
           {
               cin>>s;

           }
        if(b=='\n')
        {
            printf("%s %.2lf km\n",a,d);
        }
        p=c;



    }

}
