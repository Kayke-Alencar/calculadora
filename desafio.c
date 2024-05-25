#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 


//esta é uma branch (usando-funcoes)
//teste


int main(){
    setlocale(LC_ALL, "portuguese");

    //variaveis para o while funcionar.
    int executar = 1;
    char repetir = 'S';

    //variaveis para as operacoes.
    float resultado;
    char operacao;
    float n1;
    float n2;
    
    while (executar > 0){
        printf("Digite o caracter correspondente a operação desejada:\n(/ para divisao)\n(* para multiplicacao)\n(+ para soma)\n(- para subtracao)\n: ");
        scanf("%c", &operacao);

         
        switch ( operacao){

            //divisao
            case'/':printf("Digite o valor a ser dividido \n:");
            scanf("%f", &n1);
            printf("Digite o segundo valor \n:");
            scanf("%f", &n2);
            resultado = n1/n2;
            printf("O resultado de %.2f dividido por %.2f e %.2f \n", n1, n2, resultado); //%.2 serve para mostrar apenas dois numeros dps da virgula.
            break;
 
            //multiplicação
            case'*':printf("Digite o valor a ser multiplicado \n:");
            scanf("%f", &n1);
            printf("Digite o segundo valor \n:");
            scanf("%f", &n2);
            resultado = n1*n2;
            printf("O resultado de %.2f multiplicado por %.2f e %.2f \n", n1, n2, resultado);
            break;

            //soma
            case'+':printf("Digite o valor a ser somado \n");
            scanf("%f", &n1);
            printf("Digite o segundo valor \n:");
            scanf("%f", &n2);
            resultado = n1+n2;
            printf("O resultado de %.2f somado por %.2f e %.2f \n", n1, n2, resultado);
            break;

            //subtracao
            case'-':printf("Digite o valor a ser subtraido \n");
            scanf("%f", &n1);
            printf("Digite o segundo valor \n:");
            scanf("%f", &n2);
            resultado = n1-n2;
            printf("O resultado de %.2f subtraido por %.2f e %.2f \n", n1, n2, resultado);
            break;

            default: printf("Operador nao indentificado \n");;
        }

        

        printf("Deseja continuar? (S/N) ");
        scanf(" %c", &repetir);
        if(repetir == 'n' || repetir == 'N'){ // || serve para fazer mais uma condicao (neste caso tanto em maiusculo quanto em minusculo).
            executar = 0;
            printf("----FIMM!----  :)");
        } else {
            executar = 1;
            getchar(); // para limpar informacoes armazenadas anteriormente noteclado.
        }   
    }
}
