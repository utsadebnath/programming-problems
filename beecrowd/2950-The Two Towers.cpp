#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float m,x,y,sum,res;
    cin>>m>>x>>y;
    sum=x+y;
    res=m/sum;
    cout<<fixed<<setprecision(2)<<res<<endl;
}
