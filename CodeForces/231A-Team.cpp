#include<iostream>
using namespace std;
int main()
{
    int i,t,a,b,c,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
          k=k+1;
    }
    cout<<k<<endl;


}
