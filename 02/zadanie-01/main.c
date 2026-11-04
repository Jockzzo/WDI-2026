#include <stdio.h>  
#include <limits.h>  
  
int main() {  
    int liczba;  
    int licznik = 0;  
    int min = INT_MAX;  
    int max = INT_MIN;  
    int suma = 0;  
    float srednia = 0;  
  
    do {  
        printf("Podaj liczbe: ");  
        scanf("%d", &liczba);  
        suma+=liczba;  
        if (liczba < min) {  
             min = liczba;  
        }  
        if (liczba > max) {  
            max = liczba;  
        }  
        licznik++;  
    }  
    while (liczba %2 != 0);  
    srednia = (float)suma / licznik;  
  
    printf("Liczba MAX: %d Liczba MIN: %d, Suma: %d, Srednia: %.2f", max, min, suma, srednia);  
  
  
    return 0;  
}

