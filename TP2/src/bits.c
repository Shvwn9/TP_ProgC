#include <stdio.h>

int main() {
    unsigned int d = 0x08800000; 
    int bit4g, bit20g;
    bit4g = (d >> (31 - 3)) & 1;
    bit20g = (d >> (31 - 19)) & 1;
    if (bit4g == 1 && bit20g == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
