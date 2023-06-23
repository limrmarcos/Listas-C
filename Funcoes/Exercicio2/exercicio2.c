#include <stdio.h>
#include <stdlib.h>

void imprimirPorExtenso(int dia, int mes, int ano);

int main(void){
    int dia, mes, ano, op = 1;
    char o;

    while (op != 0){
        printf("Deseja sair? \n[Y/N]\t");
        scanf("%c", &o);

        if (o == 'N' || o == 'n'){
            printf("Digite a data: \n");
            scanf("%d %d %d", &dia, &mes, &ano);
            if (ano < 1800) {
                printf("Ano Invalido!");
            }

            imprimirPorExtenso(dia, mes, ano);
        } else if (o == 'Y' || o == 'y'){
            op = 0;
        }
    }
}

void imprimirPorExtenso(int dia, int mes, int ano){


    switch(mes){
        case 1:
            printf("%d de Janeiro de %d", dia, ano);
        break;

        case 2:
            printf("%d de Fevereiro de %d", dia, ano);
        break;

        case 3:
            printf("%d de Março de %d", dia, ano);
        break;

        case 4:
            printf("%d de Abril de %d", dia, ano);
        break;

        case 5:
            printf("%d de Maio de %d", dia, ano);
        break;

        case 6:
            printf("%d de Junho de %d", dia, ano);
        break;

        case 7:
            printf("%d de Julho de %d", dia, ano);
        break;

        case 8:
            printf("%d de Agosto de %d", dia, ano);
        break;

        case 9:
            printf("%d de Setembro de %d", dia, ano);
        break;

        case 10:
            printf("%d de Outubro de %d", dia, ano);
        break;

        case 11:
            printf("%d de Novembro de %d", dia, ano);
        break;

        case 12:
            printf("%d de Dezembro de %d", dia, ano);
        break;

        default:
            printf("Mes Invalido!");
    }
}