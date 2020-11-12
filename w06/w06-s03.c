/*
 * w06-s03
 *
 * $ gcc w06-s03.c -o w06-s03 -lm
 * $ ./w06-s03
 */
#include <stdio.h>
#include <math.h>

typedef struct
{
    double re, im;
} Complex;

Complex Complex_create( double re, double im )
{
    Complex z;
    z.re = re;
    z.im = im;
    return z;
}

double Complex_abs( Complex* z )
{
    double re2 = z->re * z->re;
    double im2 = z->im * z->im;
    return sqrt( re2 + im2 );
}

int main()
{
    Complex z = Complex_create( 1.0, 2.0 );
    printf("absolute value: %lf\n", Complex_abs(&z));
    return 0;
}


