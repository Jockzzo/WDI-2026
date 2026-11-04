#include <stdio.h>  
  
int main() {  
    int n, m;  
    char znak;  
  
    printf("Podaj dwie liczby: \n");  
    scanf("%d", &n);  
    scanf("%d", &m);  
    printf("Podaj znak dzialania: \n");  
    scanf(" %c", &znak);  
  
    switch (znak) {  
        case '+': {  
            printf("Suma: %d\n", n + m);  
        }break;  
  
        case '-': {  
            printf("Roznica: %d\n", n - m);  
        }break;  
  
        case '*': {  
            printf("Iloczyn: %d\n", n * m);  
        }break;  
  
        case '/': {  
            if (m == 0) {  
                printf("Nie mozna dzielic przez 0!\n");  
            } else {  
                printf("Iloraz: %.2f\n", (float)n / m);  
            }  
        }break;  
        case '%': {  
            if (m == 0) {  
                printf("Nie mozna dzielic przez 0!\n");  
            } else {  
                printf("Reszta: %d\n", n % m);  
            }  
        }break;  
        default: {  
            printf("Blad!");  
            return 0;  
        }break;  
  
    }  
  
    return 0;  
}
