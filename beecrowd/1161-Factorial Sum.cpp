#include <bits/stdc++.h>
using namespace std;

int main(){
    int M,N,i;
    long long Mfact,Nfact;

    while(cin>>M>>N){
        Mfact=1,Nfact=1;
    for(i=2;i<=M;i++){
        Mfact =Mfact*i;
    }

    for(i=2;i<=N;i++){
        Nfact =Nfact*i;
    }

    cout<<Mfact+Nfact<<endl;
    }
    return 0;
}