#include <stdio.h>  
  
int main() {  
    const unsigned granica = 20U;  
    unsigned i = 1U;  
    unsigned suma = 0;  
  
    for (i = 1U; i <= granica; i++) {  
        if (i % 3 == 0) {  
            suma+=i;  
        }  
    }  
    printf("Suma: %u\n", suma);  
  
  
  
    return 0;  
}
