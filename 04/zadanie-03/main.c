#include <stdio.h>  
#define N 10  
  
int main() {  
    int i = 0;  
    int zliczenia[256] = {0};  
    char tab[N];  
    unsigned char znak;  
  
    printf("Podaj imie:\n");  
    scanf("%9s", tab);  
  
  
    while (i < N && tab[i] != '\0') {  
        znak = (unsigned char)tab[i];  
        if ((znak >= 'A' && znak <= 'Z') || (znak >= 'a' && znak <= 'z')) {  
            zliczenia[znak]++;  
        }  
        i++;  
    }  
  
    for (i = 0; i < 256; i++) {  
        if (zliczenia[i] > 0) {  
            printf("%c: %d\n", (char)i, zliczenia[i]);  
        }  
    }  
    return 0;  
}
