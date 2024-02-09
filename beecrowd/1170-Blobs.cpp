#include<iostream>
using namespace std;
int main()
{
    int d,n,i;
    float x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        d=0;
        while(x>1)
        {
            x=x/2;
            d++;
        }
        cout<<d<<" dias"<<endl;
    }

}
