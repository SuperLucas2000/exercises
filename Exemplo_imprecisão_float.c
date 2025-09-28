#include <stdio.h> //inclui a biblioteca necessaria para entrada e saida

int main() {
    float x = 0.1f; //Variável com valor 0.1 (aproximado em binário)
    float soma = 0; // Acumulador iniciando em 0

    //loop que repete 10 vezes
    for (int i = 0; i < 10; i++){
    soma += x; // soma 0.1 a cada iteração

}
    //imprime o resultado com 20 casas decimais para mostrar a imprecisão
    printf("Resultado: %.20f\n", soma);

    return 0; //finaliza o programa com sucesso
}
