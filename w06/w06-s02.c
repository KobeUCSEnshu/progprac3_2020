/*
 * w06-s02
 *
 * $ gcc w06-s02.c -o w06-s02
 * $ ./w06-s02
 */
#include <stdio.h>
#include <string.h>

typedef struct
{
    char home[16];
    int rank;
} Team;

int main()
{
    Team vissel;
    strcpy( vissel.home, "Kobe" );
    vissel.rank = 12;

    printf("%s\n", vissel.home);
    printf("%d\n", vissel.rank);

    return 0;
}


