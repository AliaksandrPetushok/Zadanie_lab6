#include <stdio.h>


int fibonaccieg(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fibonaccieg(n -1) + fibonaccieg(n-2);
    }
}

int main(){
    int num1;
    printf("Podaj numer wyrazu w ciągu Fibonacciego " );
    scanf("%d", &num1);

    if (num1<0){
        printf("Bląd\n");
    }
    else {
        printf("Wyraz o numerze %d w ciągu Fibonacciego to: %d\n", num1, fibonaccieg(num1));
    }
    


    return 0;



}