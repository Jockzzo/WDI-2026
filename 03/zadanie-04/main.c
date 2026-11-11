#include <stdio.h>  
  
int suma_cyfr(int n);  
  
int main() {  
    int n;  
  
    printf("Podaj liczbę:\n");  
    scanf("%d", &n);  
  
    if (n < 0) {  
        printf("Liczba musi być nieujemna.\n");  
    }  
    else {  
        printf("%d\n", suma_cyfr(n));  
    }  
  
    return 0;  
  
}  
int suma_cyfr(int n) {  
    if (n < 10) {  
        return n;  
    }  
    else {  
        return (n % 10) + suma_cyfr(n/10);  
    }  
}
