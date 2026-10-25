#include <stdio.h>  
  
int main() {  
    int podana_liczba;  
    int h,m,s, reszta;  
    char godzina = 'h';  
    char minuta[] = "min";  
    char sekunda = 's';  
  
    printf("Podaj liczbe sekund: ");  
    scanf("%d", &podana_liczba);  
  
    if (podana_liczba < 0) {  
        printf("Liczba sekundy mniejsza od 0. \n");  
        return 0;  
    }  
    h = podana_liczba/ 3600;  
    reszta = podana_liczba % 3600;  
    m = reszta / 60;  
    s = reszta % 60;  
  
    printf("%d%c ", h,godzina);  
    printf("%d%s ", m, minuta);  
    printf("%d%c ", s, sekunda);  
  
  
    return 0;  
}
