/*
 * w06-e01
 *
 * $ gcc w06-e01.c -o w06-e01 -lm
 * $ ./w06-e01
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

Complex Complex_mul( Complex* z1, Complex* z2 )
{
    double re = z1->re * z2->re - z1->im * z2->im;
    double im = z1->re * z2->im + z1->im * z2->re;
    return Complex_create( re, im );
}

void Complex_print( Complex* z )
{
    if ( z->im > 0.0 )
    {
        printf("%lf + i * %lf\n", z->re, z->im);
    }
    else
    {
        printf("%lf - i * %lf\n", z->re, -z->im);
    }
}

int main()
{
    double a1, b1;
    double a2, b2;
    Complex z1; // z1 = a1 + i * b1
    Complex z2; // z2 = a2 + i * b2
    Complex z1z2; // z1z2 = z1 * z2

    printf("a1 = "); scanf("%lf",&a1);
    printf("b1 = "); scanf("%lf",&b1);

    printf("a2 = "); scanf("%lf",&a2);
    printf("b2 = "); scanf("%lf",&b2);

    z1 = Complex_create( a1, b1 );
    z2 = Complex_create( a2, b2 );
    z1z2 = Complex_mul( &z1, &z2 );

    printf("z1 = "); Complex_print( &z1 );
    printf("z2 = "); Complex_print( &z2 );
    printf("z1 * z2 = "); Complex_print( &z1z2 );

    return 0;
}


