#include <stdio.h>  
  
int main() {  
   int m;  
  
    printf("Podaj numer miesiąca: ");  
    scanf("%d", &m);  
  
    switch (m) {  
        case 1:  
        case 2:  
        case 3:  
            printf("Kwartał 1");  
            break;  
  
        case 4:  
        case 5:  
        case 6:  
            printf("Kwartał 2");  
            break;  
  
        case 7:  
        case 8:  
        case 9:  
            printf("Kwartał 3");  
            break;  
  
        case 10:  
        case 11:  
        case 12:  
            printf("Kwartał 4");  
            break;  
  
        default:  
            printf("Bląd!");  
            break;  
  
    }  
  
  
    return 0;  
}
