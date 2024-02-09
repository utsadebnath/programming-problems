#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int Ca,Ba,Pa,Cr,Br,Pr;
    int Sc,Sb,Sp,t;
    cin>>Ca>>Ba>>Pa;
    cin>>Cr>>Br>>Pr;
    if (Cr>Ca)
    {
        Sc=Cr-Ca;
    }
    if (Br>Ba)
    {
        Sb=Br-Ba;
    }
    if (Pr>Pa)
    {
        Sp=Pr-Pa;
    }
    t = Sc+Sb+Sp;
    cout<<t<<"\n";

    return 0;
}
