#include <stdio.h>


int printsuma(int n){
    if (n == 0){
        return 0;
    }
    else{
        return n % 10 + printsuma(n /10); 
}
}

int main(){
    int num;
    printf("Podaj liczbę " );
    scanf("%d", &num);

    printf("Suma cyfr podanej liczby %d wynosi: %d\n", num, printsuma(num));
    


    return 0;



}