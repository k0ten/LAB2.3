#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


#define N 5



void f(int* arr[]) {
    int a, b,f, i;

    for (i = 0; i < N-1 ; i++) {
        if (arr[i] == 0) {
            printf("\n%d\n", i);
            break;}}//первый нулевой

    for ( f = N-1 ; f > i; f--) {
        if (arr[f] == 0){printf("\n%d\n",f);break;}
//последний нулевой элемент
    }
    for (int j = i + 1; j <= (i+f)/2; j++) {
        int c = arr[j];
        arr[j] = arr[f-(j-i)];
        arr[f-(j-i)] = c;

    }
}

int main() {

    int arr[N];
    int i, k = 1;
    setlocale(LC_ALL, "");


    printf("Введите элементы массива:\n");
    for (i = 0; i < N; i++) {
        printf("arr[%d]= ", i);
        scanf_s("%d", &arr[i]);
    }

    f(arr);

    for (i = 0; i < N; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
