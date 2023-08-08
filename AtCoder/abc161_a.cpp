#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    //Sawp A and B
    temp=a;
    a=b;
    b=temp;
    //Swap A and C
    temp=a;
    a=c;
    c=temp;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
