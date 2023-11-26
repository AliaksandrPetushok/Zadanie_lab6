#include <stdio.h>

int linearSearch(const int array[], int start, int end, int num) {
    if (start > end) {
        return 0; 
    } else if (array[start] == num) {
        return 1; 
    } else {
        return linearSearch(array, start + 1, end, num);
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;

    printf("Podaj liczbe do znalezienia w tablicy: ");
    scanf("%d", &num);

    if (linearSearch(array, 0, sizeof(array) / sizeof(array[0]) - 1, num)) {
        printf("%d jest elementem tablicy.\n", num);
    } else {
        printf("%d nie jest elementem tablicy.\n", num);
    }

    return 0;
}