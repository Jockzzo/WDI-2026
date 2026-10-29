#include <stdio.h>  
  
int main() {  
  
    int a;  
    int b;  
    int c;  
  
    printf("Podaj liczby: \n");  
    scanf("%d", &a);  
    scanf("%d", &b);  
    scanf("%d", &c);  
  
    int suma = a + b + c;  
    int roznica = a - b;  
    int iloczyn = a*c;  
    int iloraz = c/b;  
  
    printf("Suma: %d, Roznica: %d, Iloczyn: %d, Iloraz: %d", suma, roznica, iloczyn, iloraz);  
}
