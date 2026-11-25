 #include <stdio.h>  
#include <ctype.h>  
#define N 10  
  
int main() {  
    char tab[N];  
    int i;  
  
    printf("Podaj imie:\n");  
    scanf("%9s", tab);  
  
    if (tab[0] != '\0'){  
        tab[0] = (char)toupper((unsigned char)tab[0]);  
        for (i = 1; tab[i] != '\0';i++) {  
            tab[i] = (char)tolower((unsigned char)tab[i]);  
        }  
    }  
  
    printf("%s\n", tab);  
  
  
    return 0;  
}  
