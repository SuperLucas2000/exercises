#include <stdio.h>
/* Exercício: Escreva uma única instrução C para executar cada uma das seguintes
alternativas:

a) Declarar as variáveis c, estaVariável, q76354 e número para que tenham o
tipo int.

b) Pedir que o usuário digite um inteiro. Terminar a mensagem com um sinal
de dois pontos seguido por um espaço, e deixar o cursor posicionado após o espaço.

c) Ler um inteiro do teclado e armazenar o valor digitado na variável inteira a.

d) Se o número não for igual a 7, exibir "A variável número não é igual a 7".

e) Imprimir a mensagem Este é um programa em C, em uma linha.

f) Imprimir a mensagem Este é um programa em C, em duas linhas, de modo que
a primeira linha termine em C.

g) Imprimir a mensagem Este é um programa em C, com cada palavra em uma linha separada.

h) Imprimir a mensagem Este é um programa em C, com as palavras separadas por tabulações. */



int main(void)
{
    // declaração das variáveis.
    int a;
    int c;
    int estaVariavel;
    int q76354;
    int numero;

    // pedido de input do usuário, scanf armazena o inteiro na variável a.
    printf ("Digite um inteiro: ");
    scanf ("%d", &a );

    // condicional para verificar se o inteiro não é igual a 7.
    if (a != 7)
    {
        printf("A variavel numero nao e igual a 7");
    }


    printf("Este e um programa em C\n");
    printf("Este e um programa em \nC.\n");
    printf("Este\ne\num\nprograma\nem\nC.\n");
    printf("Este\te\tum\tprograma\tem\tC.\t");



    return 0;
}
