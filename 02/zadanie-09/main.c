#include <stdio.h>  
  
int silnia(int a);  
  
int main()  
{  
    int a;  
  
  
    printf("Podaj liczbę, dla której chcesz wykonać silnię: \n");  
    scanf("%d", &a);  
  
    printf("Wynik: %d\n", silnia(a));  
  
    return 0;  
  
}  
int silnia(int a) {  
    int wynik = 1;  
    int i;  
  
    if (a == 0 || a == 1) {  
        return 1;  
    }  
    else if (a < 0) {  
        return 0;  
    }  
    for (i = 2; i <= a; i++) {  
        wynik = wynik * i;  
    }  
    return wynik;  
}
