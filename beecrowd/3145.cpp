#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,x;
    double r;
    cin>>n>>x;
    r= x/(n+2.0);
    cout<<fixed<<setprecision(2)<<r<<endl;
}
