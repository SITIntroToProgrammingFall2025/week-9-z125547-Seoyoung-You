#include <stdio.h>

int main() {
    int r, g, b;

    if (scanf("%d %d %d", &r, &g, &b) != 3) {
        return 1;
    }

    printf("The hex code is #%02X%02X%02X\n", r, g, b);

    return 0;
}

