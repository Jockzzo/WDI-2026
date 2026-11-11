#include <stdio.h>  
#define N 10  
void bubble_sort(int tab[], int n);  
  
int main() {  
    int tab[N];  
    int i;  
  
    printf("Podaj %d liczb:\n", N);  
    for (i = 0; i < N; i++) {  
        scanf("%d", &tab[i]);  
    }  
  
    bubble_sort(tab, N);  
  
    printf("Posortowana tablica:\n");  
    for (i = 0; i < N; i++) {  
        printf("%d ", tab[i]);  
    }  
  
    return 0;  
  
}  
void bubble_sort(int tab[], int n) {  
    int i, j;  
    for (i = 0; i < n - 1; i++) {  
        for (j = 0; j < n - i - 1; j++) {  
            if (tab[j] > tab[j + 1]) {  
                int temp = tab[j];  
                tab[j] = tab[j + 1];  
                tab[j + 1] = temp;  
            }  
  
        }  
    }  
}
