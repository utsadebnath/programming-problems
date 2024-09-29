#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int my_pos,lift_pos;
    int adjacent=4,oc=3,ee=5;
    for(i=1;i<=t;i++)
    {
       cin>>my_pos>>lift_pos;
       if(my_pos==lift_pos)
       {
           cout<<"Case "<<i<<": "<<((oc*3)+(ee*2)+(lift_pos*4))<<endl;
       }
       else if(my_pos<lift_pos)
       {
            cout<<"Case "<<i<<": "<<((oc*3)+(ee*2)+(lift_pos*4))<<endl;
       }
       else if(my_pos>lift_pos)
       {
            cout<<"Case "<<i<<": "<<((oc*3)+(ee*2)+(my_pos*4)+((my_pos-lift_pos)*4))<<endl;
       }
    }
}
