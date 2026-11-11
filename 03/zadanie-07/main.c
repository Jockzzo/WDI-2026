#include <stdio.h>  
#include <limits.h>  
#define N 10  
double oblicz_srednia(const int tab[], int rozmiar);  
void wieksze_od_sredniej(const int tab[], int rozmiar);  
void min_max(const int tab[], int rozmiar);  
void suma_nieparzystych(const int tab[], int rozmiar);  
void od_tylu(const int tab[], int rozmiar);  
void opcje(void);  
  
void opcje(void) {  
    printf("WYBIERZ OPCJĘ\n");  
    printf("1) Podaj średnią arytmetyczną.\n");  
    printf("2) Podaj liczby większe od średniej.\n");  
    printf("3) Wypisz najmniejszą i największą liczbę.\n");  
    printf("4) Suma liczb nieparzystych.\n");  
    printf("5) Wypisz liczby od tylu.\n");  
    printf("6) Zakończ program!\n");  
}  
  
int main() {  
    int tab[N];  
    int i;  
    int wybor;  
  
    printf("Podaj %d liczb:\n", N);  
    for (i = 0; i < N; i++) {  
        scanf("%d", &tab[i]);  
    }  
  
    do {  
        opcje();  
  
        scanf("%d", &wybor);  
  
        switch (wybor) {  
            case 1:  
                printf("Średnia wynosi: %.2f\n", oblicz_srednia(tab, N));  
                break;  
  
                case 2:  
                printf("Liczby większe od sredniej:\n");  
                wieksze_od_sredniej(tab, N);  
                break;  
  
                case 3:  
                printf("Liczba najmniejsza i największa to:\n");  
                min_max(tab, N);  
                break;  
  
                case 4:  
                printf("Suma liczb nieparzystych:\n");  
                suma_nieparzystych(tab, N);  
                break;  
  
                case 5:  
                printf("Liczby wypisane od tyłu:\n");  
                od_tylu(tab, N);  
                break;  
  
                case 6:  
                printf("Koniec programu!\n");  
                return 0;  
  
  
                default:  
                printf("ERROR!\n");  
                break;  
        }  
  
    }while (wybor != 6);  
  
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
void wieksze_od_sredniej(const int tab[], int rozmiar){  
    int i;  
    double srednia = oblicz_srednia(tab, rozmiar);  
  
    for (i = 0; i < rozmiar; i++) {  
        if (srednia < tab[i]) {  
            printf("%d\n", tab[i]);  
        }  
    }  
}  
void min_max(const int tab[], int rozmiar) {  
    int i;  
    int min = INT_MAX;  
    int max = INT_MIN;  
  
    for (i = 0; i < rozmiar; i++) {  
        if (tab[i] < min) {  
            min = tab[i];  
        }  
        if (tab[i] > max) {  
            max = tab[i];  
        }  
    }  
    printf("%d\n", min);  
    printf("%d\n", max);  
}  
  
void suma_nieparzystych(const int tab[], int rozmiar) {  
    int i;  
    int suma = 0;  
    for (i = 0; i < rozmiar; i++) {  
        if (tab[i] % 2 !=0) {  
            suma += tab[i];  
        }  
    }  
    printf("%d\n", suma);  
}  
  
void od_tylu(const int tab[], int rozmiar) {  
    int i;  
  
  
    for (i = rozmiar - 1; i >= 0 ; i--) {  
        printf("%d\n", tab[i]);  
    }  
  
}
