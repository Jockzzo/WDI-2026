#include <stdio.h>  
  
int potega(int liczba, int wykladnik);  
  
int main()  
{  
    int liczba, wykladnik;  
  
  
    printf("Podaj liczbę oraz potęge, do której chcesz ją podnieść: \n");  
    scanf("%d%d", &liczba, &wykladnik);  
  
    printf("Wynik: %d\n", potega(liczba, wykladnik));  
    return 0;  
  
}  
int potega(int liczba, int wykladnik){  
    int pomocna = 1;  
    int i;  
  
    if (liczba == 0 && wykladnik == 0) {  
        return 1;  
    }  
    for (i = 1; i <= wykladnik; i++) {  
        pomocna *=liczba;  
    }  
    return pomocna;  
  
}
