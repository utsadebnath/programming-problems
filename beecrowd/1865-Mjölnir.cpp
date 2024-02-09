#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n,i;
    string str;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>str;
        cin>>n;
        if(str=="Thor")
        cout<<"Y"<<endl;
        else
        cout<<"N"<<endl;
    }
    return 0;
}
