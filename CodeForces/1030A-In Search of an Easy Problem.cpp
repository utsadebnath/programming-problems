#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a;
    int sum=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        sum=sum+a;
    }
    if(sum>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
}
