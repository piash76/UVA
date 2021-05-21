#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,nd,d,c,v,i,j,flag=1;
    int m[30];
    while(1)
    {
        cin>>b>>nd;

        if(b==0 && nd==0)
        {
            break;
        }
        else
        {

            for(i=0;i<b;i++)
            {
                cin>>m[i];
            }
            while(nd--)
            {
                cin>>d>>c>>v;

                m[d-1]=m[d-1]-v;
                m[c-1]=m[c-1]+v;


            }

            for(j=0;j<b;j++)
            {
                if(m[j]<0)
                {
                    flag=0;
                    break;
                }
            }

            if(flag==1)
            {
                cout<<"N"<<endl;
            }
            else
            {
                cout<<"S"<<endl;
            }
            flag=1;
        }


    }


}
