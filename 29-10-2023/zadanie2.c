#include<stdio.h>
int main(int argc, char const *argv[])
{
    int liczbaP;
    int liczbaD;
    printf("Podaj pierwszą liczbe:");
    scanf("%d",&liczbaP);
    printf("Podaj drugą liczbe:");
    scanf("%d",&liczbaD);
    int dodawanie=liczbaP+liczbaD;
    int odejmowanie=liczbaP-liczbaD;
    int mnożenie=liczbaP*liczbaD;
    int dzielenie= liczbaP/liczbaD;
    int resztaZDzielenia=liczbaP%liczbaD;
    printf("Dodawanie=%d\n", dodawanie);
    printf("Odejmowanie=%d\n", odejmowanie);
    printf("Mnożenie=%d\n",mnożenie);
    printf("Dzielenie=%d\n", dzielenie);
    printf("Reszta z dzielenia=%d\n",resztaZDzielenia);
}
