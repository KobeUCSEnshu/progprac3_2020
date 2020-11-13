/*
 * w05-r01
 *
 * $ gcc w05-r01.c -o w05-r01
 * $ ./w05-r01
 */
#include <stdio.h>

void string_swap( char* s1, char* s2 )
{
    char temp[256];
    strcpy( temp, s1 );
    strcpy( s1, s2 );
    strcpy( s2, temp );
}

int main()
{
    char str1[256];
    char str2[256];

    printf("Input string 1 > ");
    scanf("%s", str1);

    printf("Input string 2 > ");
    scanf("%s", str2);

    printf("%s, %s\n",str1,str2);
    string_swap( str1, str2 );
    printf("%s, %s\n",str1,str2);

    return 0;
}


