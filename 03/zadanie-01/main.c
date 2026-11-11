#include <stdio.h>  
  
int fibonacci(int n);  
  
int main() {  
    int n;  
  
    printf("Podaj nr ostatniego wyrazu ciągu Fibonnaciego, który chcesz zsumować: \n");  
    scanf("%d", &n);  
  
    if (n >= 0 && n <= 40) {  
        printf("Wynik: %d \n", fibonacci(n));  
    }  
    else {  
        printf("Błąd");  
        return 0;  
    }  
  
    return 0;  
  
}  
  
int fibonacci(int n) {  
    int a = 0;  
    int b = 1;  
    int c;  
    int i;  
    int suma = 0;  
  
    for (i = 0; i < n; i++) {  
        c = a + b;  
        a = b;  
        b = c;  
        suma = suma + a;  
  
    }  
    return suma;  
  
}
