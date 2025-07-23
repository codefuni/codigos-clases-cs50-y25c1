#include <stdio.h>
#include <cs50.h>


void ImprimirArreglo(int arr[], int leng) {

    for (int i = 0; i < leng; i++) {
        printf("- %d",arr[i]);
    }
}


void bubblesort(int arr[], int leng) {

    bool noestaordenado;
    int temp = 0;

    do {
        noestaordenado = false;
        for(int i = 0; i < leng;i++) {

            if (arr[i] < arr[i+1] ) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                noestaordenado = true;
            }
        }

        if (noestaordenado) {
            break;
        }

    } while (noestaordenado);

    printf("\n");
    ImprimirArreglo(arr, leng);

}

int main() {
    int arr[5] = {3,5,7,1,2};
    int leng = sizeof(arr)/sizeof(arr[0]);

    ImprimirArreglo(arr, leng);
    bubblesort(arr, leng);

}

