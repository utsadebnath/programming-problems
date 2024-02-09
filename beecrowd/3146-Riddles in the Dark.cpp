#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    float r ,res;
    cin>>r;
    res = 2*3.14*r;
    cout<<showpoint<<fixed<<setprecision(2)<<res<<endl;
    return 0;
}
