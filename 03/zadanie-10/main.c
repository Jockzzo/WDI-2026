#include <stdio.h>  
#define N 10  
void merge_sort(int tab[], int lewy, int prawy);  
  
int main() {  
    int tab[N];  
    int i;  
  
    printf("Podaj %d liczb:\n", N);  
    for (i = 0; i < N; i++) {  
        scanf("%d", &tab[i]);  
    }  
  
    merge_sort(tab, 0, N - 1);  
  
    printf("Posortowana tablica:\n");  
    for (i = 0; i < N; i++) {  
        printf("%d ", tab[i]);  
    }  
  
    return 0;  
  
}  
void merge_sort(int tab[], int lewy, int prawy) {  
    if (lewy >= prawy) {  
        return;  
    }  
  
    int srodek = (lewy + prawy) / 2;  
    merge_sort(tab, lewy, srodek);  
    merge_sort(tab, srodek + 1, prawy);  
  
    int temp[N];  
    int i = lewy, j = srodek + 1, k = lewy;  
  
    while (i <= srodek && j <= prawy) {  
        if (tab[i] <= tab[j]) {  
            temp[k++] = tab[i++];  
        }  
        else {  
            temp[k++] = tab[j++];  
        }  
    }  
    while (i <= srodek) {  
        temp[k++] = tab[i++];  
    }  
    while (j <= prawy) {  
        temp[k++] = tab[j++];  
    }  
    for (i = lewy; i <= prawy; i++) {  
        tab[i] = temp[i];  
    }  
}
