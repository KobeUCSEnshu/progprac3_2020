/*
 * w06-s04
 *
 * $ gcc w06-s04.c -o w06-s04
 * $ ./w06-s04
 */
#include <stdio.h>

typedef struct
{
    char name[16];
    char home[16];
    int points;
    int goaldiff;
} Team;

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

    return 0;
}


