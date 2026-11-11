#include <stdio.h>  
  
void for_przod(const int tab[], int rozmiar);  
void for_tyl(const int tab[], int rozmiar);  
void while_przod(const int tab[], int rozmiar);  
void while_tyl(const int tab[], int rozmiar);  
void dowhile_przod(const int tab[], int rozmiar);  
void dowhile_tyl(const int tab[], int rozmiar);  
  
  
int main() {  
    int tab[] = { 1, 2, 3, 4, 5 };  
    int rozmiar = sizeof(tab) / sizeof(tab[0]);  
  
  
    printf("Dla FOR:\n");  
    for_przod(tab, rozmiar);  
    printf("\n");  
    for_tyl(tab, rozmiar);  
    printf("\n");  
  
    printf("\nDla WHILE:\n");  
    while_przod(tab, rozmiar);  
    printf("\n");  
    while_tyl(tab, rozmiar);  
    printf("\n");  
  
    printf("\nDla DO WHILE:\n");  
    dowhile_przod(tab, rozmiar);  
    printf("\n");  
    dowhile_tyl(tab, rozmiar);  
    return 0;  
  
}  
void for_przod(const int tab[], int rozmiar) {  
    int i;  
  
    printf("Od przodu:\n");  
    for (i = 0; i < rozmiar; i++) {  
        printf("%d\t", tab[i]);  
    }  
}  
  
void for_tyl(const int tab[], int rozmiar) {  
    int i;  
    printf("Od tyłu:\n");  
    for (i = rozmiar - 1; i >= 0; i--) {  
        printf("%d\t", tab[i]);  
    }  
}  
  
void while_przod(const int tab[], int rozmiar) {  
    int i = 0;  
    printf("Od przodu:\n");  
    while (i < rozmiar) {  
        printf("%d\t", tab[i]);  
        i++;  
    }  
}  
  
void while_tyl(const int tab[], int rozmiar) {  
    int i = rozmiar - 1;  
    printf("Od tyłu:\n");  
    while (i >= 0) {  
        printf("%d\t", tab[i]);  
        i--;  
    }  
}  
void dowhile_przod(const int tab[], int rozmiar) {  
    int i = 0;  
    printf("Od przodu:\n");  
    if (rozmiar > 0) {  
        do {  
            printf("%d\t", tab[i]);  
            i++;  
        } while (i < rozmiar);  
    }  
}  
void dowhile_tyl(const int tab[], int rozmiar) {  
    int i = rozmiar - 1;  
    printf("Od tyłu:\n");  
    if (rozmiar > 0) {  
        do {  
            printf("%d\t", tab[i]);  
            i--;  
        }while (i >= 0);  
    }  
}
