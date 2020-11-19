/*
 * w07-s01
 *
 * $ gcc w07-s01.c -o w07-s01
 * $ ./w07-s01
 */
#include <stdio.h>

int main()
{
    int a[5];
    int i;

    for ( i = 0; i < 5; i++ )
    {
	    *(a + i) = i;
    }

    for ( i = 0; i < 5; i++ )
    {
	    printf("a[%d] = %d\n", i, *(a + i) );
    }

    return 0;
}


