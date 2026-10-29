#include <stdio.h>  
  
int main() {  
    int tab[5];  
    int i = 0;  
    float srednia;  
    int suma = 0;  
    int ndst = 0;  
    printf("Podaj 5 ocen:\n");  
    for (i = 0; i < 5; i++) {  
        printf("Ocena %d: ", i + 1);  
        scanf("%d", &tab[i]);  
        suma += tab[i];  
    }  
    srednia = suma / 5.0;  
  
    printf("Srednia to:  %.2f", srednia);  
  
    for (i = 0; i < 5; i++) {  
        if (tab[i] < 2) {  
            ndst++;  
        }  
  
    }  
    printf("\nOcen niedostatecznych jest: %d\n", ndst);  
  
  
  
    return 0;  
}
