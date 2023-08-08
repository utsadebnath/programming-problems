#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,a[100];
    double x;
   
    cin>>x;
    
    for(i=0; i<100; i++)
    {
       
        cout<<showpoint<<fixed<<setprecision(4)<<"N"<<"["<<i<<"] = "<<x<<endl;
         x=x/2;
    }
    return 0;
}
