#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(y%4==0 && y%400!=0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
