#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {

    int p1,c1,p2,c2;
    cin>>p1>>c1>>p2>>c2;
    if((p1*c1)==(p2*c2))
    {
        cout<<0<<endl;
    }
    else if((p1*c1)>(p2*c2))cout<<-1<<endl;
    else cout<<1<<endl;
    return 0;
}
