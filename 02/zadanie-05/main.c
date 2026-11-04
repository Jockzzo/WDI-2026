#include <stdio.h>  
  
int main() {  
    char rola;  
  
    printf("I. Podanny - moźe czić króla.\n");  
    printf("II. Giermek - może wchodzić na dziedziniec zamkowy codziennie.\n");  
    printf("III. Rycerz - może wchodzić do zamku codziennie oraz rekrutować giermków.\n");  
    printf("IV. Mag - może rozmawiać z Królem.\n");  
    printf("V. Królowa - może rozkazywać Królowi.\n");  
  
  
  
    while (1) {  
  
        printf("Wybierz rolę: p/g/r/m/k lub s (aby skończyć działanie programu) \n");  
        if (scanf(" %c", &rola) != 1) {  
            break;  
        }  
        if (rola == 's') {  
            break;  
        }  
  
        switch (rola) {  
            case 'k':  
                printf("Krolowa moze:\n");  
                printf("- Rozkazywac Krolowi.\n");  
  
            case 'm':  
                if (rola == 'm') {  
                    printf("Mag moze:\n");  
                }  
                printf("- Rozmawiac z Krolem.\n");  
  
            case 'r':  
                if (rola == 'r') {  
                    printf("Rycerz moze:\n");  
                }  
                printf("- Wchodzic do zamku codziennie oraz rekrutowac giermkow.\n");  
  
            case 'g':  
                if (rola == 'g') {  
                    printf("Giermek moze:\n");  
                }  
                printf("- Wchodzic na dziedziniec zamkowy codziennie.\n");  
  
            case 'p':  
                if (rola == 'p') {  
                    printf("Poddany moze:\n");  
                }  
                printf("- Czcic Krola.\n");  
                break;  
  
            default:  
                printf("Nieprawidlowa rola!\n");  
                break;  
        }  
    }  
    printf("Koniec programu.\n");  
  
    return 0;  
}
