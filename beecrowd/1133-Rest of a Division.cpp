#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y,i;
    cin>>x>>y;
    if(y>x) //10 18
    {
        for(i=x+1;i<y;i++)
        {
            if(i%5==2||i%5==3)
            {
                cout<<i<<endl;
            }
        }
    }

    if(y<x) //18 10
    {
        for(i=y+1;i<x;i++)
        {
            if(i%5==2||i%5==3)
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}
