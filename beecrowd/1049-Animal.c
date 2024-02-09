#include<stdio.h>
int main(int argc, char const *argv[])
{
    char first[15],second[15],third[15];
    scanf("%s %s %s",first,second,third);

    if(first[0]=='v'&&second[0]=='a'&& third[0]=='c')
    printf("aguia\n");

    if(first[0]=='v'&&second[0]=='a'&& third[0]=='o')
    printf("pomba\n");

    if(first[0]=='v'&&second[0]=='m'&& third[0]=='o')
    printf("homem\n");
    
    if(first[0]=='v'&&second[0]=='m'&& third[0]=='h')
    printf("vaca\n");
    
    if(first[0]=='i'&&second[0]=='i'&& third[2]=='m')
    printf("pulga\n");

    if(first[0]=='i'&&second[0]=='i'&& third[2]=='r')
    printf("lagarta\n");

    if(first[0]=='i'&&second[0]=='a'&& third[0]=='h')
    printf("sanguessuga\n");

    if(first[0]=='i'&&second[0]=='a'&& third[0]=='o')
    printf("minhoca\n");
    
    return 0;
}
