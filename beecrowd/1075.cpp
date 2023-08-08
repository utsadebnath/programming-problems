#include<iostream>
using namespace std;
int main()
{
    int i, N[20];
    for(i=19;i>=0;i--)
    {
        cin>>N[i];
    }
    for(i=0;i<20;i++)
    {
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
}
