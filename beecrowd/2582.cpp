#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        c=a+b;
        if(c==0)
            cout<<"PROXYCITY"<<endl;
        else if(c==1)
            cout<<"P.Y.N.G."<<endl;
        else if(c==2)
            cout<<"DNSUEY!"<<endl;
        else if(c==3)
            cout<<"SERVERS"<<endl;
        else if(c==4)
            cout<<"HOST!"<<endl;
        else if(c==5)
            cout<<"CRIPTONIZE"<<endl;
        else if(c==6)
            cout<<"OFFLINE DAY"<<endl;
        else if(c==7)
            cout<<"SALT"<<endl;
        else if(c==8)
            cout<<"ANSWER!"<<endl;
        else if(c==9)
            cout<<"RAR?"<<endl;
        else if(c==10)
            cout<<"WIFI ANTENNAS"<<endl;
    }
}
