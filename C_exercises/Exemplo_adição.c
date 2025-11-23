#include <stdio.h> // biblioteca "padrão" da linguagem C
#include <locale.h> // biblioteca para utilizar funções de localização

// função main que inicia a execução do programa
int main(void)
{
    // função para corrigir a acentuação
    setlocale(LC_ALL, "Portuguese");

    int inteiro1;
    int inteiro2;
    int soma;

    printf("Digite o primeiro inteiro\n");
    scanf("%d", &inteiro1); // scanf é usado para ler o dado de entrada padrão, que normalmente é o teclado

    printf("Digite o segundo inteiro\n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2; // A variável soma recebe o valor da soma dos dois inteiros

    printf("A soma é %d\n", soma);

    return 0;
}
