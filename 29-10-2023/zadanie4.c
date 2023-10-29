#include<stdio.h>
int main(int argc, char const *argv[])
{
    int pliczba;
    int dliczba;
    int tliczba;
    printf("Podaj pierwszą liczbe:");
    scanf("%d",&pliczba);
    printf("Podaj drugą liczbe:");
    scanf("%d",&dliczba);
    printf("Podaj drugą liczbe:");
    scanf("%d",&dliczba);
    if(pliczba>dliczba && pliczba>tliczba)
    {
        printf("Najwieksza liczba jest %d\n",pliczba);
    }
    else if (dliczba>pliczba && dliczba>tliczba)
    {
        printf("Najwieksza liczba jest %d\n",dliczba);
    }
    else if (tliczba>pliczba && tliczba>dliczba)
    {
        printf("Najwieksza liczba jest %d\n",tliczba);
    }
    else
    {
        printf("liczby sa rowna\n");
    }
    
}