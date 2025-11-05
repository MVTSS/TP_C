#include <stdio.h>

int main() {
    // Char
    char c;
    signed char c_signed;
    unsigned char c_unsigned;

    // Short
    short s;
    unsigned short s_unsigned;

    // Int
    int i;
    unsigned int i_unsigned;

    // Long int
    long int li;
    unsigned long int li_unsigned;
    long long int lli;

    // Float
    float f;

    // Double
    double d;

    // Long double
    long double ld;
    printf("Char : %zu, Signed char : %zu, Unsigned char : %zu\n", sizeof(c), sizeof(c_signed), sizeof(c_unsigned));
    printf("Short : %zu, Unsigned short : %zu\n", sizeof(s),sizeof(s_unsigned));
    printf("Int : %zu, Unsigned int : %zu \n",sizeof(i),sizeof(i_unsigned));
    printf("Long int : %zu, Unsigned long int : %zu, Long long int : %zu\n",sizeof(li),sizeof(li_unsigned),sizeof(lli));
    printf("Float : %zu\n", sizeof(f));
    printf("Double : %zu\n", sizeof(d));
    printf("Long double : %zu\n", sizeof(ld));
    return 0;

}
