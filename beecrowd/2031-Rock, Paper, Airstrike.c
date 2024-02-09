#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x,i;
    char f[7],s[7];
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%s %s",f,s);

        if(f[1]=='e' && s[1]=='e') printf("Sem ganhador\n");
        else if(f[1]=='t' && s[1]=='t') printf("Aniquilacao mutua\n");
        else if(f[1]=='a' && s[1]=='a') printf("Ambos venceram\n");
        else if(f[1]=='t' || (f[1]=='e' && s[1]=='a'))
            printf("Jogador 1 venceu\n");
        else 
        printf("Jogador 2 venceu\n");
    }
    return 0;
}
