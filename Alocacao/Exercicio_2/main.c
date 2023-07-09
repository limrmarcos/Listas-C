/*2. Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e imprima o vetor lido. */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int tamanho, *vetor;

    printf( "Digite o tamanho do vetor: " );
    scanf( "%d", &tamanho );

    vetor = ( int * ) malloc ( sizeof( int ) * tamanho);

    for( int i = 0; i < tamanho; i++ ) {
        printf( "Valor: " );
        scanf( "%d", &vetor[ i ] );
       
    }

    system( "cls" );

    for( int i = 0; i < tamanho; i++ ) {
        printf( "Valor: %d \n", vetor[ i ] );
    }

    return 0;
}
