#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -32000;
    signed short ss = -12345;
    unsigned short us = 65000;

    int i = -100000;
    signed int si = -123456;
    unsigned int ui = 4000000000U;

    long int li = -1000000000L;
    signed long int sli = -2000000000L;
    unsigned long int uli = 4000000000UL;

    long long int lli = -9000000000000000000LL;
    signed long long int slli = -8000000000000000000LL;
    unsigned long long int ulli = 18000000000000000000ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.61803398875L;

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %.2f\n", f);
    printf("double : %.9f\n", d);
    printf("long double : %.11Lf\n", ld);

    return 0;
}
