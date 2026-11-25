 #include <stdio.h>  
#include <string.h>  
  
int main() {  
    char s1[100];  
    char s2[100];  
    int i, j, znaleziono;  
  
    printf("Podaj tekst:\n");  
    scanf("%99s %99s", s1, s2);  
  
    if (strlen(s1) != strlen(s2)) {  
        printf("NIE\n");  
        return 0;  
    }  
  
    for (i =0; s1[i] != '\0'; i++) {  
        znaleziono = 0;  
        for (j = 0; s2[j] != '\0';j++) {  
            if (s1[i] == s2[j]) {  
                s2[j] = '_';  
                znaleziono = 1;  
                break;  
            }  
        }  
        if (!znaleziono) {  
            printf("NIE\n");  
            return 0;  
        }  
    }  
    printf("TAK\n");  
  
    return 0;  
}
