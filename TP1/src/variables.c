#include <stdio.h>

int main() {
    // Char
    char c = 't';
    signed char c_signed = 't';
    unsigned char c_unsigned = 't';
    printf("Char : %c, Signed char : %c, Unsigned char : %c\n", c, c_signed, c_unsigned);
    // Short
    short s = 30000;
    unsigned short s_unsigned = 30000;
    printf("Short : %hi, Unsigned short : %hu\n", s, s_unsigned);
    // Int
    int i = 30000;
    unsigned int i_unsigned = 60000;
    printf("Int : %d, Unsigned int : %u\n", i, i_unsigned);
    // Long int
    long int li = 20000000L;
    unsigned long int uli = 4000000000UL;
    long long int lli = 2223372036854775807LL;
    printf("Long int : %li, Unsigned long int : %lu, Long long int : %lli\n", li, uli, lli);
    // Float
    float f = 3.141592;
    printf("Float : %f\n", f);
    // Double
    double d = 3.141592;
    long double ld = 3.141592L;
    printf("Double : %lf, Long double : %Lf\n", d, ld);


    return 0;
}
