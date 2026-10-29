#include <stdio.h>  
  
int main() {  
    int n;  
    int i = 0;  
    float srednia;  
    int suma = 0;  
  
    printf("Podaj liczbe ocen:\n");  
    scanf("%d", &n);  
    int tab[n];  
  
    for (i = 0; i < n; i++) {  
        printf("Ocena %d: ", i + 1);  
        scanf("%d", &tab[i]);  
        suma += tab[i];  
    }  
    srednia = suma / n;  
  
    printf("Srednia to: %.2f  Suma to: %d ", srednia, suma);  
  
  
  
  
    return 0;  
}
