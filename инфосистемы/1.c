#include <stdio.h>
#define SC8 signed char

SC8 add_signed_bytes(SC8 a, SC8 b) {
    return (SC8)(a + b);  // Приведение результата к SC8
}

int main() {
    SC8 numbers[][2] = {
        {100, 99},
        {-2, -127},
        {110, -96},
        {65, -118},
        {94, 11},
        {-31, -27}
    };

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        SC8 a = numbers[i][0];
        SC8 b = numbers[i][1];
        SC8 sum = add_signed_bytes(a, b); // Сумма в SC8

        printf("%d + %d = %d\n", a, b, sum);
    }

    return 0;
}
