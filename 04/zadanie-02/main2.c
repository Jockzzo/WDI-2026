#include <stdio.h>  
#define N 10  
  
int main() {  
    char tab[N];  
    int i;  
  
    printf("Podaj imie:\n");  
    scanf("%9s", tab);  
  
    if (tab[0] >= 'a' && tab[0] <= 'z') {  
        tab[0] = tab[0] - ('a' - 'A');  
    }  
  
    for (i = 1; tab[i] != '\0';i++) {  
        if (tab[i] >= 'A' && tab[i] <= 'Z') {  
            tab[i] = tab[i] + ('a' - 'A');  
        }  
    }  
  
    printf("%s\n", tab);  
  
  
    return 0;  
}
