/*
 * w06-s01
 *
 * $ gcc w06-s01.c -o w06-s01
 * $ ./w06-s01
 */
#include <stdio.h>

typedef struct
{
    float re, im;
} Complex;

int main()
{
    Complex a;
    a.re = 1.0;
    a.im = 2.0;
    
    printf("%f\n", a.im);

    return 0;
}


