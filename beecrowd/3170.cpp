#include<iostream>
using namespace std;
int main()
{
    int g,b,r1,r2;
    cin>>b>>g;
    r1=g/2;
    if(r1>b)
    {
        r2=r1-b;
        cout<<"Faltam "<<r2<<" bolinha(s)"<<endl;
    }
    if(b>=r1)
    {
        cout<<"Amelia tem todas bolinhas!"<<endl;
    }
}
