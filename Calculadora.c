#include <stdio.h>

int main () {

    int numero1, numero2, operacao;
    float resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &numero2);

    printf("\nEscolha a operação que deseja fazer:\n");
    printf("[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n\n");
    scanf("%d", &operacao);

     if(numero1 != 0 && numero2 != 0){
        switch (operacao)
        {
        case 1:
            resultado = numero1 + numero2;
            printf("Resultado: %d", resultado);
            break;
        
        case 2:
            resultado = numero1 - numero2;
            printf("Resultado: %d", resultado);
            break;
        
        case 3:
            resultado = numero1 * numero2;
            printf("Resultado: %d", resultado);
            break;
        
        case 4:
            resultado = numero1 / numero2;
            printf("Resultado: %d", resultado);
            break;

        default:
            printf("\nOperação Inválida!!\n");
            break;
        }
     } else {
        printf("\nDigite um numero diferente de 0\n");
     }

     return 0;
}