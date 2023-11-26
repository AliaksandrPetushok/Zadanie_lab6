#include <stdio.h>


void binarn(int n){
    if (n > 0){
        binarn(n / 2);
        printf("%d", n % 2);
    }
}

int main(){
    int num1;

    printf("Podaj liczbę: ");
    scanf("%d", &num1);

    if (num1 < 0){
        printf("Bląd\n");
    }
    else {
        printf("Liczba %d w systemie binarnym: ", num1);
        if (num1 == 0){
            printf("0");
        }
        else{
            binarn(num1);
        }
        printf("\n");
    }
    
    


    return 0;



}