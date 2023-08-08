#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int i,n[10],x;
    cin>>x;
    for(i=0; i<10; i++)
    {
         cout<<"N"<<"["<<i<<"] = "<<x<<endl;
         x=x*2;
    }
    return 0;
}
