#include<bits/stdc++.h>
using namespace std;
int main()
{
    int inter=0,gremio=0,draw=0,total_played=0;
    int in,gr,num;

    while(true)
    {
        cin>>in>>gr;

        if(in>gr)
            inter++;
        if(gr>in)
            gremio++;
        if(in==gr)
            draw++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>num;
        total_played++;
        if(num==2)
            break;
    }
    cout<<total_played<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<draw<<endl;

    if(inter > gremio)
        cout << "Inter venceu mais\n";
    if(inter < gremio)
        cout << "Gremio venceu mais\n";
    if(inter == gremio)
        cout << "Nao houve vencedor\n";
}
