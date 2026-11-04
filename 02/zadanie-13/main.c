#include <stdio.h>  
  
int fibonacci(int n);  
  
int main() {  
    int n;  
  
    printf("Podaj n-ty wyraz ciągu Fibonnaciego, który chcesz wyświetlić: \n");  
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
  
  
    for (i = 0; i < n; i++) {  
        c = a + b;  
        a = b;  
        b = c;  
  
    }  
    return a;  
  
}
