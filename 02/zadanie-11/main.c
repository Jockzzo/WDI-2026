#include <stdio.h>    
    
int potega(int liczba, int wykladnik);    
    
int main()    
{    
    int liczba, wykladnik;    
    
    
    printf("Podaj liczbę oraz potęge, do której chcesz ją podnieść:\n");  
      
    if (scanf("%d%d", &liczba, &wykladnik) != 2) {  
        printf("Nieprawidlowe dane!\n");  
        return 1;  
    }   
    if (wykladnik < 0) {  
        printf("Wykladnik nie moze byc ujemny!\n");  
        return 1;  
    }  
    
    printf("Wynik: %d\n", potega(liczba, wykladnik));    
    
}    
int potega(int liczba, int wykladnik){    
    
    if (wykladnik == 0) {    
        return 1;    
    }    
    return liczba * potega(liczba, wykladnik - 1);    
    
}
