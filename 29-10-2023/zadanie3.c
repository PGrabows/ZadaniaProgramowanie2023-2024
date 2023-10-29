#include<stdio.h>
int main(int argc, char const *argv[])
{
    int pliczba;
    int dliczba;
    printf("Podaj pierwszą liczbe:");
    scanf("%d",&pliczba);
    printf("\nPodaj drugą liczbe:");
    scanf("%d",&dliczba);
    if(pliczba>dliczba)
    {
        printf("Najwieksza liczba jest %d",pliczba);
    }
    else if (dliczba>pliczba)
    {
        printf("Najwieksza liczba jest %d",dliczba);
    }
    else
    {
        printf("liczby sa rowne");
    }
    
}
