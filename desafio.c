#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variáveis para as operações
float resultado;
char operacao;
float n1;
float n2;

// Função para obter os valores
void get() {
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    // Variáveis para o loop
    int executar = 1;
    char repetir = 'S';

    while (executar) {
        printf("Digite o caractere correspondente à operação desejada:\n(/ para divisão)\n(* para multiplicação)\n(+ para soma)\n(- para subtração)\n: ");
        scanf(" %c", &operacao); // O espaço antes de %c consome qualquer caractere residual no buffer

        switch (operacao) {
            case '/':
                get();
                if (n2 != 0) {
                    resultado = n1 / n2;
                    printf("O resultado de %.2f dividido por %.2f é %.2f\n", n1, n2, resultado);
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                break;

            case '*':
                get();
                resultado = n1 * n2;
                printf("O resultado de %.2f multiplicado por %.2f é %.2f\n", n1, n2, resultado);
                break;

            case '+':
                get();
                resultado = n1 + n2;
                printf("O resultado de %.2f somado por %.2f é %.2f\n", n1, n2, resultado);
                break;

            case '-':
                get();
                resultado = n1 - n2;
                printf("O resultado de %.2f subtraído por %.2f é %.2f\n", n1, n2, resultado);
                break;

            default:
                printf("Operador não identificado\n");
                break;
        }

        printf("Deseja continuar? (S/N) ");
        scanf(" %c", &repetir); // O espaço antes de %c consome qualquer caractere residual no buffer

        if (repetir == 'n' || repetir == 'N') {
            executar = 0;
            printf("----FIM!----  :)\n");
        } else if (repetir != 's' && repetir != 'S') {
            printf("Caractere não identificado\n");
        }
    }

    return 0;
}
