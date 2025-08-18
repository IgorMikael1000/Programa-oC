#include <stdio.h>

int main(){

    int numero;

    printf("DIGITE UM NUMERO MAIOR QUE 0: ");
    scanf("%d", &numero);

    if(numero != 0){

        printf("\n");

        for (int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

    } else {
        printf("\nDIGITE UM NÚMERO MAIOR QUE 0.\n");
    }
}