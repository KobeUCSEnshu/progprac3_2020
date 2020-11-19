/*
 * w07-s05
 *
 * $ gcc w07-s05.c -o w07-s05
 * $ ./w07-s05
 */
#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3

int main()
{
    int i, j;
	int* x;

    x = malloc( M * N * sizeof(int) );
	if ( x == NULL )
	{
		puts("Failed.");
		return 1;
	}

    for( i = 0; i < M; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
        	int index = i * N + j;
        	x[index] = i * N + j;
            printf("x[%d][%d] = %d\n", i, j, x[index] );
		}
	}

    free( x );

	return 0;
}


