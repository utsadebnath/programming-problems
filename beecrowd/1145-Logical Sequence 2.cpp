#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int i,count=1;
    for(i=1;i<=y;i++)
    {
        if(count==x)
        {
            cout<<i<<endl;
            count=1;
        }
        else
        {
            cout<<i<<" ";
            count++;
        }
    }
}
