#include <stdio.h>  
  
int main() {  
   int pierwsza_liczba, druga_liczba;  
  
    printf("Podaj dwie liczby: \n");  
    scanf("%d", &pierwsza_liczba);  
    scanf("%d", &druga_liczba);  
  
    if (pierwsza_liczba == 0 || druga_liczba == 0 ) {  
        printf("Błąd \n");  
    }  
    else if (pierwsza_liczba % druga_liczba == 0) {  
        printf("Tak jest podzielna \n");  
    }  
  
    else {  
        printf("Nie jest podzielna \n");  
    }  
  
  
  
  
  
    return 0;  
}
