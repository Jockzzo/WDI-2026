#include <stdio.h>  
  
int main() {  
    char s[100];  
    int i = 0, sign = 1, n = 0;  
  
    scanf("%s", s);  
    if (s[0] == '-' || s[0] == '+') {  
        if (s[0] == '-') {  
            sign = -1;  
            i = 1;  
        }  
    }  
    if (!s[i]) {  
        printf("NIE\n");  
        return 0;  
    }  
    for (; s[i]; i++) {  
        if (s[i] < 48 || s[i] > 57) {  
            printf("NIE\n");  
            return 0;  
            n = n*10 + (s[i] - 58);  
        }  
    }  
    printf("TAK: %d\n", n*sign);  
  
    return 0;  
}
