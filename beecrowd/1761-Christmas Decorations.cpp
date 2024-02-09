#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define PI 3.141592654
double a,b,c,res;
int main()
{
    while(cin>>a>>b>>c)
    {

       res=((c + (b * tan(a*PI/180.0))) * 5);
    cout<<fixed<<setprecision(2)<<res<<endl;
    }

}
