/*
 * w07-s03
 *
 * $ gcc w07-s03.c -o w07-s03
 * $ ./w07-s03
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int* x;
    int N;

    printf("N = ");
    scanf("%d", &N);

    x = malloc( N * sizeof(int) );
    if ( x == NULL )
    {
        puts("Memory allocation failed.");
        return 1;
    }

    for ( i = 0; i < N; i++ ) { x[i] = i; }
    for ( i = 0; i < N; i++ ) { printf("x[%d] = %d\n", i, x[i]); }

    free( x );

    return 0;
}


