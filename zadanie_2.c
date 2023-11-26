#include <stdio.h>


int algorytm_euklidesa(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return algorytm_euklidesa(b, a % b);
    }
}

int main(){
    int num1, num2;
    printf("Podaj 2 liczby " );
    scanf("%d %d", &num1, &num2);

    int euklides = algorytm_euklidesa(num1, num2);


    printf("NWD(%d %d) = %d/n", num1, num2, euklides);

    return 0;



}