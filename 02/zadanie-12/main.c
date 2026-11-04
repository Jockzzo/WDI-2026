#include <stdio.h>  
  
int potega(int liczba, int wykladnik);  
int dodawanie(int n);  
int odejmowanie(int liczba);  
int mnozenie(int liczb1, int liczb2);  
double dzielenie(int liczb1, int liczb2);  
int kwadrat(int liczba);  
int silnia(int liczba);  
void opcja(void);  
  
void opcja(void) {  
    printf("1) Dodawanie n liczb\n");  
    printf("2) Odejmowanie od liczby aż do momentu podania '0'\n");  
    printf("3) Mnożenie dwóch liczb\n");  
    printf("4) Dzielenie liczby\n");  
    printf("5) Potęgowanie\n");  
    printf("6) Kwadrat liczby\n");  
    printf("7) Silnia\n");  
    printf("8) Koniec programu\n");  
  
}  
  
int main()  
{  
    int liczba, wykladnik, liczb1, liczb2, opcje, n;  
  
    do {  
  
        opcja();  
  
        printf("Podaj co chcesz zrobic:\n");  
        scanf("%d", &opcje);  
  
  
        switch (opcje) {  
            case 1:  
                printf("Podaj dla jakiej liczby chcesz wykonać dodawanie:\n");  
                scanf("%d", &n);  
                if (n > 0) {  
                    printf("Suma n liczb wynosi:%d\n", dodawanie(n));  
                }  
                else {  
                    printf("Liczba musi być dodatnia!\n");  
                }  
  
                    break;  
  
                    case 2:  
                    printf("Podaj liczby:\n");  
                    scanf("%d", &liczba);  
                    printf("Roznica wynosi: %d\n", odejmowanie(liczba));  
                    break;  
  
                    case 3:  
                    printf("Podaj liczby:\n");  
                    scanf("%d %d", &liczb1, &liczb2);  
                    printf("Mnoźenie wynosi: %d\n", mnozenie(liczb1, liczb2));  
                    break;  
  
                    case 4:  
                    printf("Podaj liczby:\n");  
                    scanf("%d %d", &liczb1, &liczb2);  
  
                if (liczb2 != 0){  
                    printf("Dzielenie wynosi: %.2f\n", dzielenie(liczb1, liczb2));  
                }  
                else {  
                    printf("Nie moźna dzielić przez 0!\n");  
                }  
                break;  
                    case 5:  
                    printf("Podaj liczby:\n");  
                    scanf("%d %d", &liczba, &wykladnik );  
                    if (wykladnik >= 0) {  
                        printf("Wynikiem jest: %d\n", potega(liczba, wykladnik));  
                    }  
                   else {  
                       printf("Wykładnik nie moźe być ujemny!\n");  
                   }  
                    break;  
  
                    case 6:  
                    printf("Podaj liczbę:\n");  
                    scanf("%d", &liczba);  
                    printf("Kwadrat liczby wynosi: %d\n", kwadrat(liczba));  
  
                    break;  
  
                    case 7:  
                    printf("Podaj liczbę:\n");  
                    scanf("%d", &liczba);  
                if (liczba >= 0) {  
                    printf("Silnia wynosi: %d\n", silnia(liczba));  
                }  
                else {  
                    printf("Błąd!");  
                }  
  
                    break;  
  
                    case 8:  
                    printf("Koniec programu!\n");  
                    break;  
  
                    default:  
                    printf("Nieprawidlowy wybor\n");  
                    break;  
                }  
  
    }while (opcje != 8);  
    return 0;  
}  
  
  
  
int dodawanie(int n) {  
    int suma = 0;  
    int i;  
    int liczba; ;  
    for (i = 0; i < n; i++) {  
        scanf("%d", &liczba);  
        suma += liczba;  
    }  
    return suma;  
}  
  
int odejmowanie(int liczba) {  
    int liczb2;  
  
    do {  
        printf("Podaj liczbe do odejmowania:\n");  
        scanf("%d", &liczb2);  
        liczba-=liczb2;  
    }while (liczb2 != 0);  
    return liczba;  
}  
  
int mnozenie(int liczb1, int liczb2) {  
    return liczb1 * liczb2;  
}  
double dzielenie(int liczb1, int liczb2) {  
  
    return (double) liczb1 / liczb2;  
}  
  
int potega(int liczba, int wykladnik){  
    int pomocna = 1;  
    int i;  
    if (wykladnik == 0) {  
        return 1;  
    }  
    for (i = 1; i <= wykladnik; i++) {  
        pomocna *=liczba;  
    }  
    return pomocna;  
  
}  
int kwadrat(int liczba) {  
    int kwadrat1 = 0;  
    kwadrat1 = liczba * liczba;  
  
    return kwadrat1;  
}  
  
int silnia(int liczba) {  
    int wynik = 1;  
    int i;  
    if (liczba == 0 || liczba == 1) {  
        return 1;  
    }  
    else if (liczba < 0) {  
        return 0;  
    }  
    for (i = 2; i <= liczba; i++) {  
        wynik = wynik * i;  
    }  
    return wynik;  
}
