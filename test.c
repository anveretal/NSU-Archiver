#include <stdio.h>

int main() {
    freopen("test.bin", "rb", stdin);

    unsigned long long a = 0;
    fread(&a, sizeof(unsigned long long), 1, stdin);

    printf("%llu", a);

    // 18 446 744 073 709 551 615
    //  1 229 782 938 247 303 441
}