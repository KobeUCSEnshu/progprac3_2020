/*
 * w05-e01
 *
 * $ gcc w05-e01.c -o w05-e01
 * $ ./w05-e01
 */
#include <stdio.h>

int string_length( char* s )
{
    int length = 0;
    while ( *( s + length ) != '\0' ) { length++; }
    return length;
}

void string_reverse( char* s )
{
    int length = string_length( s );
    char* begin = s;
    char* end = s + length - 1;
    int i;
    for ( i = 0; i < length / 2; i++ )
    {
        char temp = *end;
        *end = *begin;
        *begin = temp;
        begin++;
        end--;
    }
}

int main()
{
    char s[256];
    printf("Input a string > ");
    scanf("%s", s);

    string_reverse(s);
    printf("Reversed: %s\n",s);
    return 0;
}


