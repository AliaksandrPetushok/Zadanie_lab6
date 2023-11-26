#include <stdio.h>


int silnia(int n){
    if (n == 0 || n== 1){
        return 1;
    }
    else{
        return n*silnia(n-1);
    }
}

int main(){
    int number;
    printf("Podaj liczbę " );
    scanf("%d", &number);

    printf("%d!= %d/n", number, silnia(number));



}