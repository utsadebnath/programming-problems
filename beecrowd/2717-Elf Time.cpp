#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a,b,sum;
    cin>>n;
    cin>>a>>b;
    sum =a+b;
    if (sum<=n)
    {
        cout<<"Farei hoje!"<<endl;
    }
    else
    {
        cout<<"Deixa para amanha!"<<endl;
    }
    
    return 0;
}
