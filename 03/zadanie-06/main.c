#include <stdio.h>  
#define N 5  
double oblicz_srednia(const int tab[], int rozmiar);  
  
  
int main() {  
    int tab[N];  
    int i;  
  
    printf("Podaj %d liczb:\n", N);  
    for (i = 0; i < N; i++) {  
        scanf("%d", &tab[i]);  
    }  
    double srednia = oblicz_srednia(tab, N) ;  
    printf("Średnia wynosi: %.2f\n", srednia);  
  
    for (i = 0; i < N; i++) {  
        if (srednia < tab[i]) {  
            printf("%d\n", tab[i]);  
        }  
    }  
  
    return 0;  
  
}  
double oblicz_srednia(const int tab[], int rozmiar){  
    int i;  
    int suma = 0;  
  
    for (i = 0; i < rozmiar; i++) {  
        suma+=tab[i];  
    }  
  
    return (double)suma / rozmiar;  
  
}
