#include <stdio.h>

// Este programa calculará o produto de três inteiros.

int main(void)
{
    // Declaração das variáveis necessárias
    int x, y, z, resultado;

    // input do usuário
    printf("Digite tres inteiros: \n");

    // Lê os valores digitados pelo usuário, e os armazena nas três variáveis
    scanf("%d %d %d", &x, &y, &z);

    // Faz o cálculo do produto dos três inteiros, e armnazena o resultado na variável resultado
    resultado = x * y * z;

    // Imprime o resultado da operação na tela
    printf("O produto é: %d ", resultado);

}
