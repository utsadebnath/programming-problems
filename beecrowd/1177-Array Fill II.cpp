#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,N[1000],j=0,x;
    cin>>x;

    for(i=0; i<1000; i++) 
    {
        
        cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
        if(j==x)
        j=0;
    }
    return 0;
}
