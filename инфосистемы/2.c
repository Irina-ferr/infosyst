#include <stdio.h>

void add_signed_char(char a, char b) {
    char sum = a + b;
    printf("sum signed char: %d + %d = %d\n", a, b, sum);
}

void add_int(int a, int b) {
    int sum = a + b;
    printf("sum int: %d + %d = %d\n", a, b, sum);
}

void add_long_int(long int a, long int b) {
    long int sum = a + b;
    printf("sum long int: %ld + %ld = %ld\n", a, b, sum);
}

void add_unsigned_short(unsigned short a, unsigned short b) {
    unsigned short sum = a + b;
    printf("sum unsigned short: %u + %u = %u\n", a, b, sum);
}

int main() {
    // Сложение для signed char от -128 до 127
    add_signed_char(100, 99);
    add_signed_char(-2, -127);
    add_signed_char(110, -96);
    add_signed_char(65, -118);
    add_signed_char(94, 11);
    add_signed_char(-31, -27);

    // Сложение для int от −2 147 483 648 до 2 147 483 647
    add_int(100, 99);
    add_int(-2, -127);
    add_int(110, -96);
    add_int(65, -118);
    add_int(94, 11);
    add_int(-31, -27);

    // Сложение для long int от −2 147 483 648 до 2 147 483 647
    add_long_int(100L, 99L);
    add_long_int(-2L, -127L);
    add_long_int(110L, -96L);
    add_long_int(65L, -118L);
    add_long_int(94L, 11L);
    add_long_int(-31L, -27L);

    // Сложение для unsigned short от 0 до 65 535
    add_unsigned_short(100U, 99U);
    add_unsigned_short(2U, 127U);
    add_unsigned_short(110U, 96U);
    add_unsigned_short(65U, 118U);
    add_unsigned_short(94U, 11U);
    add_unsigned_short(31U, 27U);

    return 0;
}
