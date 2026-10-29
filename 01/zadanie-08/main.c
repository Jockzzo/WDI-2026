#include <stdio.h>  
  
int main() {  
   int pierwsza_liczba, druga_liczba, suma, odejmowanie, mnozenie, dzielenie, modulo;  
    char znak;  
  
    printf("Podaj dwie liczby: \n");  
    scanf("%d", &pierwsza_liczba);  
    scanf("%d", &druga_liczba);  
  
    printf("Podaj znak działania: \n");  
    scanf(" %c", &znak);  
  
    if (znak == '+') {  
        suma = pierwsza_liczba + druga_liczba;  
        printf("%d", suma);  
    }  
    else if (znak == '-') {  
        odejmowanie = pierwsza_liczba - druga_liczba;  
        printf("%d", odejmowanie);  
    }  
    else if (znak == '*') {  
        if ()  
        mnozenie = pierwsza_liczba * druga_liczba;  
        printf("%d", mnozenie);  
    }  
    else if (znak == '/') {  
        dzielenie = pierwsza_liczba / druga_liczba;  
        printf("%d", dzielenie);  
    }  
    else if (znak == '%') {  
        modulo = pierwsza_liczba % druga_liczba;  
        printf("%d", modulo);  
    }  
  
  
  
  
  
    return 0;  
}
