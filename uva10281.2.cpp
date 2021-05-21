#include<cstdio>
#include<cstring>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    double prev_sec=0,cur_sec,speed=0,hh=0,mm=0,ss=0,dis=0;
    char str[100];
    while(scanf("%s",str)!=EOF)
    {
        sscanf(str,"%lf:%lf:%lf",&hh,&mm,&ss);
        cur_sec=(hh*3600)+(mm*60)+ss;
        dis=dis+((cur_sec-prev_sec)*(speed/3600.0));
        char ch=getchar();
        if(ch==' ')
            scanf("%lf",&speed);
        else if(ch=='\n')
            printf("%s %.2lf km\n",str,dis);
        prev_sec=cur_sec;
    }
    return 0;
}
