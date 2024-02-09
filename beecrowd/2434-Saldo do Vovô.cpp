#include<iostream>
using namespace std;
int main()
{
    int n,am,dw,m;
    cin>>n>>am;
    m=am;
    while(n--)
    {
        cin>>dw;
        am=am+dw;
        if(am<m)
            m=am;
    }
    cout<<m<<endl;
}
