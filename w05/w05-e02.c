/*
 * w05-e02
 *
 * $ gcc w05-e02.c -o w05-e02
 * $ ./w05-e02
 */
#include <stdio.h>

int main()
{
    char s[256];
    int n[256];
    char* ps;
    int* pn;
    int result;

    printf("Thee digit number> ");
    scanf("%s",s);

    ps = s;
    pn = n;
    while ( *ps != '\0' )
    {
        char c = *(ps++);
        if ( '0' <= c && c <= '9' )
        {
            *(pn++) = c - '0';
        }
    }

    result = 100 * n[0] + 10 * n[1] + n[2];
    printf("Result: %d\n", result);

    return 0;
}


