/*
 * w06-s06
 *
 * $ gcc w06-s06.c -o w06-s06
 * $ ./w06-s06
 */
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[32];
    int age;
} Player;

typedef struct
{
    char home[16];
    Player no10;
} Team;

int main()
{
    Team vissel;
    strcpy( vissel.home, "Kobe" );
    strcpy( vissel.no10.name, "Podolski" );
    vissel.no10.age = 33;

    printf( "%s\n", vissel.no10.name );

    return 0;
}


