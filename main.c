#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 128

int main()
{
    char opcaoRecebida[1];
    int opcao, numero;
    char buf[BUFFERSIZE];

    do {
        printf("Selecione a operação que deseja realizar:\n");
        printf("Para converter de decimal para hexadecimal, digite 1\n");
        printf("Para converter de hexadecimal para decimal, digite 2\n");
        printf("Para sair, digite 3\n");

        scanf("%s", opcaoRecebida);
        opcao = atoi(opcaoRecebida);

        switch (opcao){
            case 1:
                printf("Digite o valor que quer converter para hexadecimal \n");
                fgetc(stdin);
                fgets(buf, BUFFERSIZE, stdin);
                if (sscanf(buf, "%d", &numero) != 1)
                    printf("O valor informado não é um número decimal \n\n");
                else
                    printf("O número decimal %d em Hexadecimal é igual a %X \n\n", numero, numero);
                break;
            case 2:
                printf("Digite o valor que quer converter para decimal \n");
                fgetc(stdin);
                fgets(buf, BUFFERSIZE, stdin);
                if (sscanf(buf, "%X", &numero) != 1)
                    printf("O valor informado não é um número hexadecimal \n\n");
                else
                    printf("O número hexadecimal %X em decimal é igual a %d \n\n", numero, numero);
                break;
            case 3:
                printf("Volte sempre!");
                break;
            default:
                printf("Opção inválida.\n\n");
        }
    } while (opcao != 3);
}

