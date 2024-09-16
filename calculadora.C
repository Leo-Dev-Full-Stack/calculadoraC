#include <stdio.h>
#include <stdlib.h>
#include "calculadoraBiblioteca.h"

int main(void) {
    int n1, n2, operacao, resultado;

    do  {
        system("cls");

        printf("Opcao 1 - SOMAR\n");
        printf("Opcao 2 - SUBTRAIR\n");
        printf("Opcao 3 - MULTIPLICAR\n");
        printf("Opcao 4 - DIVIDIR\n");
        printf("Opcao 5 - MODULO\n");
        printf("Opcao 0 - SAIR\n");

        printf("\nEscolha qual operacao matematica voce deseja realizar:\n");
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 0:
            break;

        case 1:
            printf("Digite dois numeros:\n");
            scanf("%d%d", &n1, &n2);
            resultado = somar(n1, n2);
            printf("O resultado de somar: %d + %d = %d\n\n", n1, n2 , resultado);
            break;

        case 2:
            printf("Digite dois numeros:\n");
            scanf("%d%d", &n1, &n2);
            resultado = subdtrair(n1, n2);
            printf("O resultado de subtrair: %d - %d = %d\n\n", n1, n2 , resultado);
            break;

        case 3:
            printf("Digite dois numeros:\n");
            scanf("%d%d", &n1, &n2);
            resultado = multiplicar(n1, n2);
            printf("O resultado de multiplicar: %d x %d = %d\n\n", n1, n2 , resultado);
            break;

        case 4:
            printf("Digite dois numeros:\n");
            scanf("%d%d", &n1, &n2);
            resultado = dividir(n1, n2);
            printf("O resultado de dividir: %d / %d = %d\n\n", n1, n2 , resultado);
            break;

        case 5:
            printf("Digite dois numeros:\n");
            scanf("%d%d", &n1, &n2);
            resultado = modulo(n1, n2);
            printf("O resultado do modulo (resto da divisao) de: %d / %d = %d\n\n", n1, n2 , resultado);
            break;

        default:
            printf("Voce escolheu uma opcao de operacao invalida\n\n");
            break;
        }
        system("pause");
    }
    while (operacao != 0);
    printf("SAINDO");
}