#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    float m;

    while(cin>>t)
    {
        int count=0;
        for(i=0;i<t;i++)
        {
            cin>>n;
            if(n)
                count++;
        }
        m= ceil (t*.666);
        int x=(int) m;
        if(count>=x)
        {
            cout<<"impeachment"<<endl;
        }
        else
            cout<<"acusacao arquivada"<<endl;
    }
}
