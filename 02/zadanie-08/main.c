#include <stdio.h>  
  
int max(int a, int b);  
int min(int a, int b);  
  
int main()  
{  
  int a,b;  
    printf("Podaj liczby: \n");  
    scanf("%d %d",&a,&b);  
  
    printf("Wartość większa %d\n", max(a,b));  
    printf("Wartość mniejsza %d\n",  min(a,b));  
}  
  
int max(int a, int b)  
{  
    if(a>b) {  
        return a;  
    }  
    else {  
        return b;  
    }  
  
}  
int min(int a, int b)  
{  
    if(a<b) {  
        return a;  
    }  
    else {  
        return b;  
    }  
  
}
