#include<stdio.h>

int main()
{
    int a,b = 0,c = 0,d = 0, e, i;
    printf("MUITO OBRIGADO\n");
    for(i = 0;i < 100;i++){
        scanf("%d", &a);
        if (a >= 1 && a <= 3){
            if(a == 1)b++;
            else if(a == 2)c++;
            else if(a == 3)d++;
        }
        else if(a == 4)break;
    }
    printf("Alcool: %d\n", b);
    printf("Gasolina: %d\n", c);
    printf("Diesel: %d\n", d);

    return 0;
}