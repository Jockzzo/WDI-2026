#include <stdio.h>

int ciag(int n);

int main() {
    int n;

    printf("Podaj n-ty wyraz ciągu ");
    scanf("%d", &n);
    if (n != 1 || n <1 ) {
        return 1;
    }

    printf("%d", ciag(n));

    return 0;

}

int ciag(int n) {
    if (n == 1 ){
        return 1;
    }
    if (n == 2 ) {
        return 2;
    }
    if (n == 3 ) {
        return 3;
    }
    else {
        return ciag(n-1) * ciag(n-2) - ciag(n-3);
    }


}
