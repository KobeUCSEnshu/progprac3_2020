/*
 * w06-s07
 *
 * $ gcc w06-s07.c -o w06-s07
 * $ ./w06-s07
 */
#include <stdio.h>
#include <string.h>

typedef struct Team_t Team;

typedef struct
{
    char name[32];
    int age;
    Team* prevteam;
} Player;

struct Team_t
{
    char home[16];
    Player no10;
};

int main()
{
    Team vissel = { "Kobe", "Podolski", 33 };
    Team galatasaray = { "Istanbul", "Belhanda", 28 };
    vissel.no10.prevteam = &galatasaray;

    printf( "%s\n", vissel.no10.prevteam->home );

    return 0;
}



