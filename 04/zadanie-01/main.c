#include <stdio.h>  
#define N 10  
  
void quick_sort(int tab[], int lewy, int prawy);  
  
  
int main() {  
    int tab[N];  
    int i;  
  
    printf("Podaj liczby:\n");  
  
    for (i = 0; i < N; i++) {  
        scanf("%d", &tab[i]);  
    }  
  
    printf("Posortowana tablica algorytmem QUICK_SORT:\n");  
    quick_sort(tab, 0 ,N-1);  
    for (i = 0; i < N; i++) {  
        printf("%d ", tab[i]);  
    }  
  
  
    return 0;  
}  
void quick_sort(int tab[], int lewy, int prawy) {  
    int i;  
    int pomocnicza;    
    int pivot, miejsce;  
      
    if (prawy <= lewy) {  
        return;  
    }  
  
    pivot = tab[prawy];  
    miejsce = lewy;  
  
  
    for (i = lewy; i < prawy; i++) {  
        if (tab[i] < pivot) {  
  
            pomocnicza = tab[i];  
            tab[i] = tab[miejsce];  
            tab[miejsce] = pomocnicza;  
  
            miejsce += 1;  
        }  
    }  
  
    pomocnicza = tab[miejsce];  
    tab[miejsce] = tab[prawy];  
    tab[prawy] = pomocnicza;  
  
    quick_sort(tab, lewy, miejsce - 1);  
    quick_sort(tab, miejsce + 1, prawy);  
  
}
