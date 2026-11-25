#include <stdio.h>  
#include <ctype.h>  
#define N 100  
  
void szyfruj(char tekst[], int k);  
void deszyfruj(char tekst[], int k);  
void MENU();  
  
void MENU() {  
    printf("====MENU=====\n");  
    printf("1) Szyfruj\n");  
    printf("2) Deszyfruj\n");  
    printf("3) Zmień dlugość klucza szyfrującego\n");  
    printf("4) Koniec programu!\n");  
}  
  
int main() {  
    int opcja = 0;  
    char wiadomosc[N];  
    int klucz;  
  
    printf("Twoja wiadomość:\n");  
    scanf("%99s", wiadomosc);  
  
    printf("Podaj długość klucza:\n");  
    scanf("%d", &klucz);  
  
    while (opcja != 4) {  
        MENU();  
        printf("Wybierz opcje:\n");  
        scanf("%d", &opcja);  
  
        switch (opcja) {  
            case 1:  
            szyfruj(wiadomosc,klucz);  
                printf("%s\n", wiadomosc);  
                break;  
  
            case 2:  
                deszyfruj(wiadomosc,klucz);  
                printf("%s\n", wiadomosc);  
                break;  
  
            case 3:  
                printf("Podaj długość klucza:\n");  
                scanf("%d", &klucz);  
                break;  
  
            case 4:  
                printf("Koniec programu!\n");  
                return 0;  
  
            default:  
                printf("BŁĄD!\n");  
                break;  
        }  
    }  
  
    return 0;  
}  
  
void szyfruj(char tekst[], int k) {  
    int i;  
    k = ((k % 26 ) + 26) % 26;  
  
    for (i = 0; tekst[i] != '\0'; i++) {  
        if (isupper((unsigned char)tekst[i])) {  
            tekst[i] = ((tekst[i] - 'A' + k) % 26) + 'A';  
        } else if (islower((unsigned char)tekst[i])) {  
            tekst[i] = ((tekst[i] - 'a' + k) % 26) + 'a';  
        }  
    }  
}  
  
void deszyfruj(char tekst[], int k) {  
    szyfruj(tekst, -k);  
}
