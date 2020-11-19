/*
 * w07-s04
 *
 * $ gcc w07-s04.c -o w07-s04
 * $ ./w07-s04
 */
#include <stdio.h>

int main()
{
    int i, j, a[3][3];
    
    for ( i = 0; i < 3; i++ )
    {
        for ( j = 0; j < 3; j++ )
        {
            printf("[%d][%d]: %p\n", i, j, &a[i][j]);
        }
    }

    return 0;
}


