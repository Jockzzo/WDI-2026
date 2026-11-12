#include <stdio.h>
#define N 5

void opcje(void) {
    printf("1) Dodaj\n");
    printf("2) Usun\n");
    printf("3) Wyswietl\n");
    printf("4) Koniec\n");
}

int main() {
    int tab[N];
    int ile = 0;
    int i, tryb, wybor, liczba;

    printf("1. FIFO\n");
    printf("2. LIFO\n");
    scanf("%d", &tryb);

    if (tryb != 1 && tryb != 2) {
        printf("Zly tryb!\n");
        return 0;
    }

    do {
        opcje();
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                if (ile == N) {
                    printf("Tablica pelna\n");
                }
                else {
                    printf("Podaj liczbe\n");
                    scanf("%d", &liczba);
                    tab[ile++] = liczba;
                }
                break;
            case 2:
                if (ile == 0) {
                    printf("Tablica pusta\n");
                }
                else if (tryb == 1) {
                    printf("%d\n", tab[0]);

                    for (i = 0; i < ile - 1; i++) {
                        tab[i] = tab[i + 1];
                    }
                    ile--;
                }
                else {
                    printf("%d\n", tab[--ile]);
                }
                break;

            case 3:
                for (i = 0; i < ile; i++) {
                    printf("%d\n", tab[i]);
                }
                break;

            case 4:
                printf("Koniec!\n");
                break;

            default:
                printf("Zly wybor!\n");
                break;
        }
        }while (wybor != 4);

    return 0;


}
