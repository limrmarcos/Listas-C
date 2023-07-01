#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    system( "chcp 65001 > NUL" );

    int *num = malloc ( sizeof( int ) );

    for( int i = 0; i < 5; i++ ) {
       printf("Digite os números: ");
       scanf("%d", &num[ i ]);
    }

    for( int i = 0; i < 5; i ++ ) {
        printf( "Número %d: %d\n", i + 1, num[ i ] );
    }

    free( num );
    return 0;
}