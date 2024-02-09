#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,t;
    float a,b,c,avg;
    cin>>t;
    for (i =1; i <=t; i++)
    {
        cin>>showpoint>>fixed>>setprecision(1)>>a>>b>>c;
        avg = (a*2+b*3+c*5)/10;
        cout<<showpoint<<fixed<<setprecision(1)<<avg<<endl;
    }
    
    return 0;
}
