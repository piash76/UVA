#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int x,y,fx,fy,i;
    char d;
    string a;
    cin>>x>>y;
    while((scanf("%d %d %c",&fx,&fy,&d))==3)
    {
        cin>>a;
        for(i=0;i<a.size();i++)
        {


        if(a[i]=='R')
        {
            switch(d)
            {
                case 'E':d='S';break;
                case 'S':d='W';break;
                case 'W':d='N';break;
                case 'N':d='E';break;

            }
        }

        else if(a[i]=='F')
        {
            switch(d)
            {
                case 'E':fx++;break;
                case 'S':fy--;break;
                case 'W':fx--;break;
                case 'N':fy++;break;

            }
        }

        else
        {
            switch(d)
            {
                case 'E':d='N';break;
                case 'N':d='W';break;
                case 'W':d='S';break;
                case 'S':d='E';break;

            }
        }
        }

        if(fx>=0 && fx<x && fy>=0 && fy<y)
        {
            cout<<fx<<" "<<fy<<" "<<d<<endl;
        }
        else
        {
            cout<<fx<<" "<<fy<<" "<<d<<" "<<"LOST"<<endl;
        }


    }
}
