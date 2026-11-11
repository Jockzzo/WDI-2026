#include <stdio.h>  
  
int moj_ceil(double n);  
int moj_round(double n);  
int moj_floor(double n);  
void info(void);  
  
void info(void) {  
    printf("Wybierz co chcesz robić:\n");  
    printf("1. Zaokrąglij w górę.\n");  
    printf("2. Zaokrąglij w dół.\n");  
    printf("3. Zaokrąglij Matematycznie.\n");  
    printf("4. Zakończ program.\n");  
}  
  
int main() {  
    int wybor;  
    double n;  
  
    do {  
        info();  
        scanf("%d", &wybor);  
  
        switch (wybor) {  
            case 1:  
                printf("Podaj liczbę, którą chcesz zaokrąglić w górę:\n");  
                scanf("%lf", &n);  
                printf("Wynik %d\n", moj_ceil(n));  
                break;  
            case 2:  
                printf("Podaj liczbę, którą chcesz zaokrąglić w dół:\n");  
                scanf("%lf", &n);  
                printf("Wynik: %d\n", moj_floor(n));  
                break;  
            case 3:  
                printf("Podaj liczbę, którą chcesz zaokrąglić Matematycznie:\n");  
                scanf("%lf", &n);  
                printf("Wynik: %d\n", moj_round(n));  
                break;  
  
            case 4:  
                printf("Koniec programu!");  
                break;  
            default:  
                printf("Błędny numer\n");  
                break;  
        }  
    } while (wybor !=4);  
  
    return 0;  
  
}  
int moj_round(double n) {  
    if (n >= 0) {  
        return (int)(n + 0.5);  
    }  
    else {  
        return (int)(n - 0.5);  
    }  
  
}  
  
int moj_ceil(double n) {  
    int i = (int)n;  
  
    if (n > i) {  
        return i + 1;  
    }  
    return i;  
    
}  
  
int moj_floor(double n) {  
    int i = (int)n;  
  
    if (n < i) {  
        return i - 1;  
    }  
    return i;  
  
}
