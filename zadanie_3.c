#include <stdio.h>


int printliczby(int n){
    if (n >= 1){
        printliczby(n-1);
        printf("%d", n);    
}
}

int main(){
    int num;
    printf("Podaj liczbę " );
    scanf("%d", &num);

    printf("Liczby od 1 do %d\n", num);
    printliczby(num);
    printf("\n");


    return 0;



}