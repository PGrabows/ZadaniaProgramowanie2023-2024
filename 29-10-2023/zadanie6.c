#include<stdio.h>
int main(int argc, char const *argv[])
{
    int dzien;
    int miesiac;
    int rok;
    printf("podaj dzien: ");
    scanf("%i",&dzien);
    printf("podaj miesiac: ");
    scanf("%i",&miesiac);
    printf("podaj rok: ");
    scanf("%i",&rok);
    if(rok%4==0)
    {
        if (miesiac==2)
        {
            if(dzien>=1 && dzien<=29);
        }
        
    }
    else
    {
        if (miesiac==2)
            {
                if(dzien>=1 && dzien<=28)
                {
                    printf("data jest poprawna");
                }
                else
                {
                    printf("data jest nie poprawna");
                }
            }
        else if (miesiac%2==0 && (miesiac>=1 && miesiac<=7))
        {
            if(dzien>=1 && dzien<=30)
        }
        else
        {
    
        }   
    }
}
