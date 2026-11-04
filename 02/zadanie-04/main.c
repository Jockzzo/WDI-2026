 #include <stdio.h>  
  
int main() {  
    int n, m;  
    char znak = '+';  
    int wybor;  
  
    printf("1) Zmien pierwsza liczbe.\n");  
    printf("2) Zmien druga liczbe.\n");  
    printf("3) Wybierz znak dzialania.\n");  
    printf("4) Zakoncz program.\n");  
  
    printf("Podaj dwie liczby:\n");  
    scanf("%d", &n);  
    scanf("%d", &m);  
  
    printf("Podaj co chcesz dalej zrobic:\n");  
    scanf("%d", &wybor);  
  
    while (wybor != 4) {  
        switch (wybor) {  
            case 1:  
                printf("Podaj pierwsza liczbe:\n");  
                scanf("%d", &n);  
                break;  
  
            case 2:  
                printf("Podaj druga liczbe:\n");  
                scanf("%d", &m);  
                break;  
  
            case 3:  
                printf("Podaj znak dzialania:\n");  
                scanf(" %c", &znak);  
  
                switch (znak) {  
                    case '+':  
                        printf("Suma: %d\n", n + m);  
                        break;  
  
                    case '-':  
                        printf("Roznica: %d\n", n - m);  
                        break;  
  
                    case '*':  
                        printf("Mnozenie: %d\n", n * m);  
                        break;  
  
                    case '/':  
                        if (m != 0) {  
                            printf("Dzielenie: %.2f\n", (float)n / m);  
                        } else {  
                            printf("Nie mozna dzielic przez zero!\n");  
                        }  
                        break;  
  
                    case '%':  
                        if (m != 0) {  
                            printf("Reszta: %d\n", n % m);  
                        } else {  
                            printf("Nie mozna dzielic przez zero!\n");  
                        }  
                        break;  
  
                    default:  
                        printf("Nieprawidlowy znak!\n");  
                        break;  
                }  
                break;  
  
            default:  
                printf("Nieprawidlowy wybor!\n");  
                break;  
        }  
  
        printf("\n1) Zmien pierwsza liczbe.\n");  
        printf("2) Zmien druga liczbe.\n");  
        printf("3) Wybierz znak dzialania.\n");  
        printf("4) Zakoncz program.\n");  
  
        printf("Podaj co chcesz robic dalej:\n");  
        scanf("%d", &wybor);  
    }  
  
    printf("Koniec programu.\n");  
  
    return 0;  
}
