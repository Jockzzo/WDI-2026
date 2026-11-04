#include <stdio.h>  
  
int main() {  
    int n;  
	int i; 
    int suma = 0;  
  
  
    do {  
        printf("Podaj liczbe z zakresu 1-100: \n");  
        scanf("%d",&n);  
  
  
    }  
    while (n > 100 || n < 1);  
  
    for (i = 1; i <= n; i++) {  
        suma = suma + i * i;  
    }  
    printf("Wynik: %d\n", suma);  
  
  
  
    return 0;  
}
