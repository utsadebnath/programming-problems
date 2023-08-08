#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i=i+2)
    {
        for(j=6+i;j>3+i;j--)
        {
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
        }
    }
}

