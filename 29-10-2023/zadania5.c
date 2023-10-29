#include<stdio.h>
 int main(int argc, char const *argv[])
 {
    int wybor;
    int kod;
    char litera;
    printf("Jesli chcessz podac litere wpisz 1, jesli chcesz podać kod ASCII wpisz 2 ");
    scanf("%d",&wybor);
    if (wybor==1)
    {
        printf("podaj literę:");
        scanf(" %c",&litera);
        int ascii = (int) litera;
        if ((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122))
        {
            printf("należy do alfabetu");
        }
        else
        {
            printf("nie należy do alfabetu");
        }

    }
    else if (wybor==2)
    {
        printf("podaj kod:");
        scanf("%i",&kod);
        if ((kod>=65 && kod<=90)||(kod>=97 && kod<=122))
        {
            printf("należy do alfabetu");
        }
        else
        {
            printf("nie należy do alfabetu");
        }
    }
    else
    {
        printf("podano nie poprawny kod");
        return 0;
    }
    
 }
 
