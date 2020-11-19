/*
 * w07-s02
 *
 * $ gcc w07-s02.c -o w07-s02
 * $ ./w07-s02
 */
#include <stdio.h>
#define NMAX 100

int main()
{
    long i, j, a[NMAX][NMAX];
    for ( i = 0; i < NMAX; i++ )
    {
        for ( j = 0; j < NMAX; j++ )
        {
            a[i][j] = i * NMAX + j;
        }
    }
    return 0;
}


