/*
 * w06-s05
 *
 * $ gcc w06-s05.c -o w06-s05
 * $ ./w06-s05
 */
#include <stdio.h>

typedef struct
{
    char name[16];
    char home[16];
    int points;
    int goaldiff;
} Team;

void Team_swap( Team* t1, Team* t2 )
{
    Team tmp = *t1;
    *t1 = *t2;
    *t2 = tmp;
}

int main()
{
    Team J1[5] = {
        {"Frontale", "Kawasaki", 53, 27},
        {"Sanfrecce", "Hiroshima", 44, 13},
        {"Antlers", "Kashima", 47, 8},
        {"Consadole", "Sapporo", 44, -2},
        {"F.C.Tokyo", "Tokyo", 37, 8}
    };
    
    int rank = 3;
    printf("Rank %d: %s\n", rank, J1[rank-1].name);
    Team_swap( &J1[rank-1], &J1[rank] );
    printf("Rank %d: %s\n", rank, J1[rank-1].name);

    return 0;
}


