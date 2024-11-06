#include <stdio.h>

int main(void) {
    int a;
    int b;
    int somma;
    int i;
    do{
        printf("chiedere 2 numeri\n");
        printf("numero 1: ");
        scanf("%d",&a);
        printf("numero 2: ");
        scanf("%d",&b);
    } while (b <= a);
    somma=0;
    for (i=a; i<= b; i++) {
        somma+=i;
    }printf("somma totale : %d",somma);
}
