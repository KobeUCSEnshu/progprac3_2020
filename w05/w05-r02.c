/*
 * w05-r02
 *
 * $ gcc w05-r02.c -o w05-r02
 * $ ./w05-r02
 */
#include <stdio.h>

void array_print( int* a, int n )
{
    int i;
    printf("{");
    for ( i = 0; i < n; i++ )
    {
        printf("%d", a[i]);
        if ( i < n - 1 ) { printf(", "); }
    }
    printf("}\n");
}

void array_shuffle( int* a, int n )
{
    int i;
    srand( time(NULL) );
    for ( i = 0; i < n; i++ )
    {
        int r = rand() % n;
        int temp = a[i];
        a[i] = a[r];
        a[r] = temp;
    }
}

int main()
{
    int i = 0;
    int i0 = 0;
    int a[5] = {0,1,2,3,4};

//    array_print( a, 5 );
    array_shuffle( a, 5 );
//    array_print( a, 5 );

    for ( i = 0; i < 5; i++ )
    {
        if ( a[i] == 0 )
        {
            i0 = i;
            break;
        }
    }

    for ( i = 0; i < 3; i++ )
    {
        int j = 0;
        printf("Index [1-5]? ");
        scanf("%d",&j); j--;

        if ( j > i0 )
        {
            printf("Low!\n");
        }
        else if ( j < i0 )
        {
            printf("High!\n");
        }
        else
        {
            printf("Correct!\n");
            array_print( a, 5 );
            return 0;
        }
    }
    
    printf("Grame over!\n");
    array_print( a, 5 );

    return 0;
}


